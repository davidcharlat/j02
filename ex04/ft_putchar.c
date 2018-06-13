/* ************************************************************************** */
/*                                                                            */
/*   ft_putchar.c                                                             */
/*                                                                            */
/*   By: david charlat <david_charlat hébergé à yahoo.fr>                     */
/*                                                                            */
/*   Created: 2018/06/13                                                      */
/*   Last updated: 2018/06/13                                                 */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
