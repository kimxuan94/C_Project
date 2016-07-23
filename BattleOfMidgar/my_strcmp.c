/*
** my_strcmp.c for  in /home/toumin_o/toumin_o/Jour_04/toumin_o/my_strcmp
**
** Made by Toumine Ophelie
** Login   <toumin_o@etna-alternance.net>
**
** Started on  Tue Oct  8 11:58:04 2013 Toumine Ophelie
** Last update Sat Oct 12 11:59:45 2013 Toumine Ophelie
*/

int     my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0')
    i++;
  return (s1[i] - s2[i]);
}
