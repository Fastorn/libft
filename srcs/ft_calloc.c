#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;

    if (!nmemb || !size)
        return (NULL);
    ptr = malloc(nmemb * size);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}