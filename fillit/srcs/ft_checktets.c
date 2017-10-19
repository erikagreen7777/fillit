#include "libft.h"
#include "fillit.h"

int		ft_checktets(char *s)
{
	int i;
	i = 0;
	int len = ft_strlen(s);
// while (s[i])
// 	printf("%s\n", ft_trimdots(&s[i]));
while (i < len)
{

	if (!(ft_strequ(s, TET2)))
	{
		ft_putstr("NO: ");
		break ;
	}
	else
	{
		ft_putstr("YES: ");
		break ;
	}
	i++;

}
	return (0);
}
