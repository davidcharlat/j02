# include <stdio.h>
# include <unistd.h>
int ft_putchar (char c)
{
	write (1,&c,1);
	return 0;
}

void ft_is_negative (int n)
{
	if (n >= 0)
		{
			c = 'P';
			ft_putchar(c);
		}
		else
		{
			c = 'N';
			ft_putchar(c);
		}

}


