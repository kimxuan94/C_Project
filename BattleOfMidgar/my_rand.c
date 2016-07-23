/*
** my_rand.c for  in /home/toumin_o/toumin_o/Battle_For_Midgar
**
** Made by Toumine Ophelie
** Login   <toumin_o@etna-alternance.net>
**
** Started on  Sun Oct 13 09:51:06 2013 Toumine Ophelie
** Last update Sun Oct 13 11:29:15 2013 Toumine Ophelie
*/

#include <stdlib.h>
#include <time.h>
#include "Battle.h"

int	my_rand(int nb)
{
  srand(time(NULL));
  nb = (rand() % 100);
  return(nb);
}
