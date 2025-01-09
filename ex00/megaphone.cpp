#include <iostream>

int main(int argc, char **argv)
{
	int i, j;

    if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
	}
	else
	{
		i = 0;
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
				std::cout << (char)std::toupper(argv[i][j]);
		}
		std::cout << std::endl;
	}
    return (0);
}
