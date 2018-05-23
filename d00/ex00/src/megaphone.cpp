#include <iostream>

int main(int ac, char **av)
{
	if (ac != 1)
	{
		for (int i = 1; av[i]; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				if (islower(av[i][j]))
				{
					char c = av[i][j];
					c = toupper(c);
					std::cout << c;
				}
				else
					std::cout << av[i][j];
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}