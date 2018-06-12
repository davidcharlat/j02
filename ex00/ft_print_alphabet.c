# include <stdio.h>
# include <unistd.h>
int ft_putchar (char c)
{
	write (1,&c,1);
	return 0;
}

void ft_print_alphabet (void)
{
	char tableau []="abcdefghijklmnopqrstuvwxyz";
	int i=0;
	for (i=0;i<26;i=i+1)
		{
		ft_putchar (tableau[i]);
		}
	ft_putchar ('\n');

}

