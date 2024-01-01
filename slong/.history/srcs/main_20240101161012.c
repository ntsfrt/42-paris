#include "../includes/so_long.h"

int main(int ac, char **av)
{
	t_mlx	*mlx;
	
	if (ac != 2)
		ft_error();
	check_map(av[1]);
	mlx->mlx = mlx_init();
	mlx->
}