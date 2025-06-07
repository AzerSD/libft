/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argparse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 21:23:43 by userr             #+#    #+#             */
/*   Updated: 2025/06/07 20:18:11 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

void init_arg_parser(ArgParser *parser) {
    parser->option_count = 0;
    parser->positional_count = 0;
}

void add_option(ArgParser *parser, const char *short_flag, const char *long_flag, ArgType type, void *value) {
    if (parser->option_count >= MAX_OPTIONS) {
        fprintf(stderr, "Too many options.\n");
        exit(1);
    }
    Option *opt = &parser->options[parser->option_count++];
    opt->short_flag = short_flag ? ft_strdup(short_flag) : NULL;
    opt->long_flag = long_flag ? ft_strdup(long_flag) : NULL;
    opt->type = type;
    opt->value = value;
}

void parse_arguments(ArgParser *parser, int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        char *arg = argv[i];

        int matched = 0;

        // Match options
        for (int j = 0; j < parser->option_count; j++) {
            Option *opt = &parser->options[j];

            if ((opt->short_flag && ft_strcmp(arg, opt->short_flag) == 0) ||
                (opt->long_flag && ft_strcmp(arg, opt->long_flag) == 0)) {
                matched = 1;

                if (opt->type == ARGTYPE_FLAG) {
                    *(int *)opt->value = 1;
                } else if (i + 1 < argc) {
                    if (opt->type == ARGTYPE_INT) {
                        *(int *)opt->value = atoi(argv[++i]);
                    } else if (opt->type == ARGTYPE_STRING) {
                        *(char **)opt->value = argv[++i];
                    }
                } else {
                    fprintf(stderr, "Option %s requires a value.\n", arg);
                    exit(1);
                }
                break;
            }
        }

        // Handle positional arguments
        if (!matched) {
            if (parser->positional_count < MAX_POSITIONAL) {
                parser->positional_args[parser->positional_count++] = arg;
            } else {
                fprintf(stderr, "Too many positional arguments.\n");
                exit(1);
            }
        }
    }
}

void print_usage(const ArgParser *parser) {
    printf("Usage:\n");
    for (int i = 0; i < parser->option_count; i++) {
        Option *opt = &parser->options[i];
        printf("  %s, %s\n", opt->short_flag ? opt->short_flag : "",
               opt->long_flag ? opt->long_flag : "");
    }
}

void free_arg_parser(ArgParser *parser) {
    for (int i = 0; i < parser->option_count; i++) {
        Option *opt = &parser->options[i];
        if (opt->short_flag) {
            free(opt->short_flag);
            opt->short_flag = NULL;
        }
        if (opt->long_flag) {
            free(opt->long_flag);
            opt->long_flag = NULL;
        }
    }
    parser->option_count = 0;
    parser->positional_count = 0;
}


// int main(int argc, char *argv[]) {
//     ArgParser parser;
//     init_arg_parser(&parser);

//     int verbose = 0;
//     int count = 0;
//     char *name = NULL;

//     add_option(&parser, "-v", "--verbose", ARGTYPE_FLAG, &verbose);
//     add_option(&parser, "-c", "--count", ARGTYPE_INT, &count);
//     add_option(&parser, "-n", "--name", ARGTYPE_STRING, &name);

//     parse_arguments(&parser, argc, argv);

//     printf("Verbose: %d\n", verbose);
//     printf("Count: %d\n", count);
//     printf("Name: %s\n", name ? name : "(null)");

//     printf("Positional arguments:\n");
//     for (int i = 0; i < parser.positional_count; i++) {
//         printf("  %s\n", parser.positional_args[i]);
//     }

//     return 0;
// }
