#include "libft.h"
#include "fillit.h"

int		ft_checktets(char *s)
{
	if (ft_strequ(s, TET19) || (ft_strequ(s, TET20)))
	{
		puts("INVALID: no hashes or all hashes present");
		return (2); 
	}	

	if (!(ft_strequ(s, TET1)) && (!(ft_strequ(s, TET2))) && (!(ft_strequ(s, TET3))) && (!(ft_strequ(s, TET4))) && (!(ft_strequ(s, TET5))) && \
		(!(ft_strequ(s, TET6))) && (!(ft_strequ(s, TET7))) && (!(ft_strequ(s, TET8))) && (!(ft_strequ(s, TET9))) && (!(ft_strequ(s, TET10))) && \
		(!(ft_strequ(s, TET11))) && (!(ft_strequ(s, TET12))) && (!(ft_strequ(s, TET13))) && (!(ft_strequ(s, TET14))) && (!(ft_strequ(s, TET15))) \
		&& (!(ft_strequ(s, TET16))) && (!(ft_strequ(s, TET17))) && (!(ft_strequ(s, TET18))) && (!ft_strequ(s, TET21)))
	{
		ft_putstr("invalid tetromino NO: ");
		return (2);
	}
	else
	{
		// ft_putstr("This TET is a valid shape");
		return (0) ;
	}
}
