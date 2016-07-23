/*
** my_printf.c for  in /home/toumin_o/toumin_o/Battle_For_Midgar
**
** Made by Toumine Ophelie
** Login   <toumin_o@etna-alternance.net>
**
** Started on  Sat Oct 12 16:12:26 2013 Toumine Ophelie
** Last update Sat Oct 12 16:23:59 2013 Toumine Ophelie
*/
#include "Battle.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_printf(char	*str)
{
  int	i;
  for(i = 0; str[i] != '\0'; i++)
    {
      my_putchar(str[i]);
    }
}
