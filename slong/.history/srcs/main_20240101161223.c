#include "../includes/so_long.h"

int main(int ac, char **av)
{
	t_mlx	*mlx;
	t_map	*map;

	if (ac != 2)
		ft_error();
	map = check_map(av[1]);
	mlx->mlx = mlx_init();
	mlx->win = mlx_new_window(mlx, , "")
}