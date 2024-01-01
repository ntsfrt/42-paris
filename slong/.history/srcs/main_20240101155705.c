#include "../includes/so_long.h"

int main(int ac, char **av)
{
	void	*mlx;
	
	if (ac != 2)
		ft_error();
	check_map(av[1]);
	mlx = mlx_init()	
}