/*
** Battle.c for  in /home/toumin_o/toumin_o/Battle_For_Midgar/struct
**
** Made by Toumine Ophelie
** Login   <toumin_o@etna-alternance.net>
**
** Started on  Fri Oct 11 11:15:58 2013 Toumine Ophelie
** Last update Tue Oct 15 09:46:17 2013 Toumine Ophelie
*/

#ifndef BATTLE_H_
# define BATTLE_H_

typedef struct	hero
{
  char *name;
  int pv;
  int pm;
}		t_hero;

typedef struct	ennemy
{
  char *name;
  int pv;
  int pm;
}		t_ennemy;

char    *readLine();
void my_putchar(char);
void     my_putstr(char *str);
int	my_strcmp(char *s1, char *s2);
int	my_strlaine(char *str);
void	attack(t_ennemy	*ennemy);
void	my_printf(char	*str);
int	my_putnbr(int nbr);
int    stat(t_hero *hero, t_ennemy *ennemy, char *user_command);
void	libra(t_ennemy *ennemy, t_hero *hero);
void	thunder(t_hero *hero, t_ennemy *ennemy);
void    my_put_nbr(int nb);
void    fire(t_hero *hero, t_ennemy *ennemy);
void    slash(t_hero *hero, t_ennemy *ennemy);
void    bite(t_hero *hero);
void	earthquake(t_hero *hero, t_ennemy *ennemy);
void    doom(t_hero *hero, t_ennemy *ennemy);
int     my_rand(int nb);
void	ennemy_attack(t_hero *hero, t_ennemy *ennemy, int random_number);
void    user_attack(t_hero *hero, t_ennemy *ennemy, char *command);

# endif /* !BATTLE_H_ */
