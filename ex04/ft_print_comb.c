/* ************************************************************************** */
/*                                                                            */
/*   ft_print_comb.c                                                          */
/*                                                                            */
/*   By: david charlat <david_charlat hébergé à yahoo.fr>                     */
/*                                                                            */
/*   Created: 2018/06/13                                                      */
/*   Last updated: 2018/06/13                                                 */
/*                                                                            */
/* ************************************************************************** */


int	ft_putchar(char c);

void	ft_print_comb(void)
{
	int	numbers[3] = {48, 49, 50};

	while (numbers[0] <= 55)
	{
		numbers[1] = numbers[0]+1;
		while (numbers[1] <= 56)
		{
			numbers[2] = numbers[1]+1;
			while (numbers[2] <= 57)
			{
				ft_putchar(numbers[0]);
				ft_putchar(numbers[1]);
				ft_putchar(numbers[2]++);
				ft_putchar(' ');
			}
			numbers[1]++;
		
		}
		numbers[0]++;
	}
	ft_putchar('\n');
}
