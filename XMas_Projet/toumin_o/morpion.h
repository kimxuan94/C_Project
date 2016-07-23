#ifndef __MORPION_H__
# define __MORPION_H__

void	draw_grid(int tab[][3]);
void	play_game(int tab[][3], int joueur);
int	game_over(int tab[][3]);
int	saisie_donnee(char *invite);
int	win_game(int tab[][3]);
int	main();
int	my_putstr(char *str);

# endif /*!__MORPION_H__*/ 
