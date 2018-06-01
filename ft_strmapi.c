#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		index;

	if (!s || !f)
		return (NULL);
	if (!(ptr = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	index = 0;
	while (s[index])
	{
		ptr[index] = f(index, s[index]);
		++index;
	}
	ptr[index] = '\0';
	return (ptr);
}
