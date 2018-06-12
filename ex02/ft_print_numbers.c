# include <stdio.h>
# include <unistd.h>
int ft_putchar (char c)
{
	write (1,&c,1);
	return 0;
}

void ft_print_numbers (void)
{
	char j='0';int i=0;
	for (i=0;i<10;i=i+1)
		{
		ft_putchar (j);
		j++;
		}
	ft_putchar ('\n');

}

int main()
{
	ft_print_numbers();
	return 0;
}
