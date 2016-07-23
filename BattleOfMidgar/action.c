/*
** action.c for  in /home/toumin_o/toumin_o/Battle_For_Midgar
**
** Made by Toumine Ophelie
** Login   <toumin_o@etna-alternance.net>
**
** Started on  Sat Oct 12 11:52:04 2013 Toumine Ophelie
** Last update Sun Oct 13 14:37:14 2013 Toumine Ophelie
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "Battle.h"

void	attack(t_ennemy	*ennemy)
{

  ennemy->pv = ennemy->pv - 7;

  my_putstr("\nAttack..! ");
  my_putstr(ennemy->name);
  my_putstr(" lost 7 PV.\n\n");
}

void	slash(t_hero *hero, t_ennemy *ennemy)
{
  ennemy->pv = ennemy->pv - 10;
  hero->pv = hero->pv - 2;

  my_putstr("\n!!! Slash !!! ");
  my_putstr(ennemy->name);
  my_putstr(" lost 10 PV and you lost 2 PV.\n\n");
}

void	fire(t_hero *hero, t_ennemy *ennemy)
{
  ennemy->pv = ennemy->pv - 10;
  hero->pm = hero->pm - 3;

  my_putstr("\n!!! FIRE !!! ");
  my_putstr(ennemy->name);
  my_putstr(" lost 10 PV and you lost 3 PM.\n\n");
}

void	thunder(t_hero *hero, t_ennemy *ennemy)
{
  ennemy->pv = ennemy->pv - 15;
  hero->pm = hero->pm - 5;

  my_putstr("\n!!! Thunder !!! ");
  my_putstr(ennemy->name);
  my_putstr(" lost 15 PV and you lost 5 PM.\n\n");
}

void    prompt()
{
  char  *my_prompt;
  my_prompt = "Your turn > ";
  write(1, my_prompt, my_strlaine(my_prompt));
}

int	stat(t_hero *hero, t_ennemy *ennemy, char *user_command)
{
  int	h_pv;
  int	h_pm;

  h_pv = hero->pv;
  h_pm = hero->pm;

  my_putstr("\n");
  my_putstr(hero->name);
  my_putstr(" : ");
  my_put_nbr(h_pv);
  my_putstr(" PV and ");
  my_put_nbr(h_pm);
  my_putstr(" PM.\n\n");
  if(ennemy->pv <= 0 && hero->pv >= 0)
    {
      my_putstr("********* End Game!!! YOU WON *********\n\n");
      return (0);
    }
  else if(hero->pv <= 0 && ennemy->pv >= 0)
    {
      my_putstr("********* EPIC FAIL!!! GAME OVER YOU HAVE BEEN TROLLED B!TCH *********\n\n");
      return (0);
    }
  prompt();
  user_command = readLine();
  user_attack(hero, ennemy, user_command);
  return(0);
}

void	libra(t_ennemy *ennemy, t_hero *hero)
{
  int	e_pv;
  int	e_pm;
  int	h_pm;

  e_pv = ennemy->pv;
  e_pm = ennemy->pm;
  hero->pm = hero->pm - 1;
  h_pm = hero->pm;

  my_putstr("\n");
  my_putstr(hero->name);
  my_putstr(" you just lost 1 PM.\n");
  my_putstr(ennemy->name);
  my_putstr(" : ");
  my_put_nbr(e_pv);
  my_putstr(" PV and ");
  my_put_nbr(e_pm);
  my_putstr(" PM.\n\n");
}

void	bite(t_hero *hero)
{
 hero->pv = hero->pv - 6;

 my_putstr("\n\n!!! B.I.T.E !!! ");
 my_putstr(hero->name);
 my_putstr(" lost 6 PV.\n\n");
}

void	earthquake(t_hero *hero, t_ennemy *ennemy)
{
  hero->pv = hero->pv - 15;
  ennemy->pv = ennemy->pv - 3;

  my_putstr("\n\n!!! E.A.R.T.H.Q.U.A.K.E !!! ");
  my_putstr(hero->name);
  my_putstr(" lost 15 PV.\n");
  my_putstr(ennemy->name);
  my_putstr(" lost 3 PV.\n\n");
}

void	doom(t_hero *hero, t_ennemy *ennemy)
{
  hero->pv = hero->pv - 11;
  ennemy->pm = ennemy->pm - 5;

  my_putstr("\n\n!!! D.O.O.M !!! ");
  my_putstr(hero->name);
  my_putstr(" lost 11 PV.\n");
  my_putstr(ennemy->name);
  my_putstr(" lost 5 PM.\n\n");
}
