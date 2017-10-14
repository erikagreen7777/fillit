char 	*ft_remove_newline(char *str)
{
  int i = 0;
  int j = 0;
  char *new = NULL;
  new = ft_strnew(sizeof(s));
  while (s[i])
  {
    if (s[i] != '\n')
    {
      new[j] = s[i];
      j++;
    }
   i++;
  }
  return (new);
}