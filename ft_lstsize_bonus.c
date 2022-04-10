#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int c;
    t_list *ptr;

    ptr = lst;
    c = 0;
    while (ptr)
    {
        ptr = ptr -> next;
        c++;
    }
    return (c);
}
