#include "../includes/so_long.h"

int main(int ac, char **av)
{
	
	
	if (ac != 2)
		ft_error();
	check_map(av[1]);
	
}