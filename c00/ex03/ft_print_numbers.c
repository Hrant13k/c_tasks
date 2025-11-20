#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';

	//while number is less than or equal '9'
	while (number <= '9')
	{
		//print number
		write(1, &number, 1);

		//go to next number
		number++;
	}
}
