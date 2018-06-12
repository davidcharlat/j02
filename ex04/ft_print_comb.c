# include <stdio.h>
# include <unistd.h>

int 	ft_putchar (char c)
{
	write (1,&c,1);
	return (0);
}

void 	ft_print_comb (void)
{
	char 	first_number;
	char 	second_number;
	char 	third_number;
	int 	i;	
	int		j;
	int		k;

	first_number = '0';
	second_number = '0';
	third_number = '0';

	for (i=0; i<10; i=i+1)
		{
		for (j=i+1; j<10; j++)
			{
			second_number = second_number + j;
			for (k=j+1; k<10; k++)
				{
				third_number = third_number + k;
				ft_putchar (first_number);
				ft_putchar (second_number);
				ft_putchar (third_number);
				ft_putchar (' ');
				third_number = '0';
				}
			second_number='0';
			}
		first_number++;
		}
}


