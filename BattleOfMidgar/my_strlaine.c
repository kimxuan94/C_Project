/*
** my_strlaine.c for  in /home/toumin_o/toumin_o/Jour_02/toumin_o/my_strlen
**
** Made by Toumine Ophelie
** Login   <toumin_o@etna-alternance.net>
**
** Started on  Wed Oct  2 10:23:01 2013 Toumine Ophelie
** Last update Sat Oct 12 13:27:48 2013 Toumine Ophelie
*/

#include "Battle.h"

int	my_strlaine(char *str)
{
  int o=0;

  while(str[o] != '\0')
    {
      o++;
    }
  return (o);
}
