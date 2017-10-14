#include "libft.h"

char 	*ft_remove_newline(char *str)
{
  int i = 0;
  int j = 0;
  char *new = NULL;
  new = ft_strnew(ft_strlen(str));
  while (str[i])
  {
    if (str[i] != '\n')
    {
      new[j] = str[i];
      j++;
    }
   i++;
  }
  return (new);
}