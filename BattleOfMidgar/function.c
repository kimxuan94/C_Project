function.c
Détails
Activité
Aucune activité enregistrée.
Tous les éléments ont été désélectionnés.

/*
** function.c for  in /home/toumin_o/toumin_o/Battle_For_Midgar
**
** Made by Toumine Ophelie
** Login   <toumin_o@etna-alternance.net>
**
** Started on  Fri Oct 11 20:41:51 2013 Toumine Ophelie
** Last update Sun Oct 13 14:32:30 2013 Toumine Ophelie
*/

#include "Battle.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	prompt_hero()
{
  char	*my_prompt;
  my_prompt = "Your turn > ";
  write(1, my_prompt, my_strlaine(my_prompt));
}

void	prompt_ennemy()
{
  char	*my_prompt;
  my_prompt = "Turn of your ennemy > ";
  write(1, my_prompt, my_strlaine(my_prompt));
}

t_hero	*random_hero(char *argv, unsigned int h_pv, unsigned int h_pm)
{
  t_hero *hero;

  hero = malloc(sizeof(t_hero));
  hero->name = malloc(my_strlaine(argv) * sizeof(argv));
  hero->name = argv;
  hero->pv = h_pv;
  hero->pm = h_pm;

  return(hero);
}

t_ennemy	*random_ennemy(unsigned int e_pv, unsigned int e_pm)
{
  t_ennemy	*ennemy;
  char	*name;

  name = "Orphan";

  ennemy = malloc(sizeof(t_ennemy));
  ennemy->name = malloc(sizeof(name) * my_strlaine(name));
  ennemy->name = name;
  ennemy->pv = e_pv;
  ennemy->pm = e_pm;

  return(ennemy);
}


void	welcome(char *user)
{
  my_putstr("Welcome my biggest warrior ");
  my_putstr(user);
  my_putstr("\n\n");
}

int	main(int argc, char *argv[])
{
  char	*user_command;
  t_ennemy	*ennemy;
  t_hero	*hero;
  if(argc == 3 && my_strcmp(argv[1], "-n") == 0)
    {
      my_putstr("\033c");
      welcome(argv[2]);
      hero = random_hero(argv[2], 100, 30);
      ennemy = random_ennemy(75, 20);
      while(1)
	{
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
	  prompt_hero();
	  user_command = readLine();
	  if(my_strcmp(user_command, "stat") == 0)
	    {
	      stat(hero, ennemy, user_command);
	    }
	  user_attack(hero, ennemy, user_command);
	  prompt_ennemy();
	  ennemy_attack(hero, ennemy, 10);
	}
    }
  else
    my_putstr("Failed, missing 3 argunents. Try again!\n");
  return (0);
}
