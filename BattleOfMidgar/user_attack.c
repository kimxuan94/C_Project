/*
** user_attack.c for  in /home/toumin_o/toumin_o/Battle_For_Midgar
**
** Made by Toumine Ophelie
** Login   <toumin_o@etna-alternance.net>
**
** Started on  Sun Oct 13 10:10:38 2013 Toumine Ophelie
** Last update Tue Oct 15 12:11:13 2013 Toumine Ophelie
*/

#include "Battle.h"

void	user_attack(t_hero *hero, t_ennemy *ennemy, char *command)
{
  if(my_strcmp(command, "attack") == 0)
    attack(ennemy);
  else if(my_strcmp(command, "fire") == 0)
    fire(hero, ennemy);
  else if(my_strcmp(command, "thunder") == 0)
    thunder(hero, ennemy);
  else if(my_strcmp(command, "libra") == 0)
    libra(ennemy, hero);
  else if(my_strcmp(command, "slash") == 0)
    slash(hero, ennemy);
}

void	ennemy_attack(t_hero *hero, t_ennemy *ennemy, int random_number)
{
  int	nbr_randed;
  nbr_randed = my_rand(random_number);

  if(nbr_randed >= 0 && nbr_randed < 40)
    bite(hero);
  else if(nbr_randed > 39 && nbr_randed < 70)
    earthquake(hero, ennemy);
  else if(nbr_randed > 69 && nbr_randed <= 100)
    doom(hero, ennemy);
}
