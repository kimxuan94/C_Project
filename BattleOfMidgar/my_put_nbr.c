my_put_nbr.c
Détails
Activité
Aucune activité enregistrée.
Tous les éléments ont été désélectionnés.

/*
** my_put_nbr.c for  in /home/toumin_o/toumin_o/Battle_For_Midgar
**
** Made by Toumine Ophelie
** Login   <toumin_o@etna-alternance.net>
**
** Started on  Sat Oct 12 17:31:07 2013 Toumine Ophelie
** Last update Sat Oct 12 17:31:21 2013 Toumine Ophelie
*/

#include "Battle.h"

void    my_put_nbr(int nb)
{
  int   neg;

  neg = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
        {
          neg = 1;
          nb++;
        }
      nb = nb * -1;
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  if (neg == 1)
    {
      neg = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    my_putchar(nb % 10 + '0');
}
