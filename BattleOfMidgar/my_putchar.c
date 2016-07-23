/*
** my_putchar.c for  in /home/toumin_o/toumin_o/Battle_For_Midgar
**
** Made by Toumine Ophelie
** Login   <toumin_o@etna-alternance.net>
**
** Started on  Sat Oct 12 13:38:14 2013 Toumine Ophelie
** Last update Sat Oct 12 22:28:56 2013 Toumine Ophelie
*/

#include <unistd.h>

#include "Battle.h"


void	my_putchar(char c)
{
  write(1, &c, 1);
}
