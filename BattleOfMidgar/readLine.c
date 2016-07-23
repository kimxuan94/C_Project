/*
** readLine.c for  in /home/toumin_o/toumin_o/Battle_For_Midgar
**
** Made by Toumine Ophelie
** Login   <toumin_o@etna-alternance.net>
**
** Started on  Sat Oct 12 12:08:24 2013 Toumine Ophelie
** Last update Sat Oct 12 12:34:29 2013 Toumine Ophelie
*/

#include <unistd.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <stdlib.h>

char	*readLine()
{
  ssize_t	ret;
  char	*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
