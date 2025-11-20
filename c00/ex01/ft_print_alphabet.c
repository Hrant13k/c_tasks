#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';

	//while letter is less than or equal to z
	while (letter <= 'z')
	{
		//print letter
		write(1, &letter, 1);

		//go to next letter
		letter++;
	}
}
