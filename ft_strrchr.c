#include "libft.h"

// The strrchr() function returns a pointer to the last occurrence
// of the character c in the string s.


char* ft_strrchr(const char* s, int c)
{
	char* last;
	char	find;
	size_t	i;

	last = (char*)s;
	find = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == find)
			return (last + i);
		i--;
	}
	if (last[i] == find)
		return (last);
	return (0);
}

// int main()
// {
//     const char *largestring = "Foo, Bar, Baz, ofc it works :)";
//     const char character = ',';
//     char *ptr;

//     ptr = ft_strrchr(largestring, character);
//     printf("%s", ptr);
// 	return (0);
// }
