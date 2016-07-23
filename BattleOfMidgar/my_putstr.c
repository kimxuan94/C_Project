/*
** my_putstr.c for  in /home/toumin_o/toumin_o/Jour_02/toumin_o
**
** Made by Toumine Ophelie
** Login   <toumin_o@etna-alternance.net>
**
** Started on  Tue Oct  1 22:09:21 2013 Toumine Ophelie
** Last update Sat Oct 12 22:30:00 2013 Toumine Ophelie
*/

#include <stdlib.h>
#include <unistd.h>

#include "Battle.h"

void	my_putstr(char *str)
{
  int i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
