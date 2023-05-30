/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_2d_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:52:58 by asioud            #+#    #+#             */
/*   Updated: 2023/05/30 10:55:07 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void **allocate_2d_array(int rows, int cols, size_t element_size) {
    void** result = (void**)malloc(rows * sizeof(void*));
    if (result == NULL) {
        return NULL;
    }

    int i = 0;
    while (i < rows) {
        result[i] = malloc(cols * element_size);
        if (result[i] == NULL) {
            int j = 0;
            while (j < i) {
                free(result[j]);
                j++;
            }
            free(result);
            return NULL;
        }
        i++;
    }

    return result;
}

void** copy_2d_array(void** array, int rows, int cols, size_t element_size)
{
    void** result = allocate_2d_array(rows, cols, element_size);
    if (result == NULL) {
        return NULL;
    }

    int i = 0;
    while (i < rows) {
        ft_memcpy(result[i], array[i], cols * element_size);
        i++;
    }

    return result;
}