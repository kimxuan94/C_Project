#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ncurses.h>
#include "my_putstr.c"
#include "morpion.h"

#define TRUE  1
#define FALSE 0

void draw_grid(int tab[][3])
{
  int i; // Ligne                                                                 
  int j; // Colonne                                                               
  printf("----------\n");
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
          printf("| ");
          if(tab[i][j] == 0)
            {
              printf(" "); //tab[i][j]);                                          
            }
          //Test//                                                               \
                                                                                  
          else if (tab[i][j] == 1)
            {
              printf("O");
            }
          else if (tab[i][j] == 2)
            {
              printf("X");
            }

        }
      printf("\n");
      //}                                                                         
      printf("----------\n");
    }
}

int game_over(int tab[][3])
{
  int i=0;
  int j=0;

  for (i=0;i<3;i++)
    {
      for (j=0;j<3;j++)
        {
          if (tab[i][j] == 0)
            {
              return FALSE;
            }
        }
    }
  // else                                                                         
  return TRUE;
}

int saisie_donnee (char *visitor) {
  int val;

  do {
    printf ("%s", visitor);
    scanf ("%d",&val);
  } while (( val <1) || (val >3));

  return (val);
}

int win_game (int tab[][3]) {
  int i=0;
  int null;

  // Test sur les lignes                                                          
  for ( i=0; i<3; i++) {
    if (( tab[i][0] >0) && ( tab[i][0] == tab[i][1] ) && ( tab[i][1] == tab[i][2]\
							   )) {
      my_putstr ("YOU WON, YOU'RE TIC MASTER !\n");
      return TRUE;
    }
  }

  // Test sur les colonnes                                                        
  for ( i=0; i<3; i++) {
    if (( tab[0][i] >0) && ( tab[0][i] == tab[1][i] ) && ( tab[1][i] == tab[2][i]\
							   )) {
      my_putstr ("YOU WON, YOU'RE TIC MASTER !\n");
      return TRUE;
    }
  }

  // Test sur les diagonales                                                      
  if (( tab[0][0] >0) && ( tab[0][0] == tab[1][1] ) && ( tab[1][1] == tab[2][2] )\
      ) {
    my_putstr ("YOU WON, YOU'RE TIC MASTER !\n");
    return TRUE;
  }

  // Test sur les diagonales                                                      
  if (( tab[0][2] >0) && ( tab[0][2] == tab[1][1] ) && ( tab[1][1] == tab[2][0] )\
      ) {
    my_putstr ("YOU WON, YOU'RE TIC MASTER !\n");
    return TRUE;
  }

  return FALSE;
  my_putstr("BWAAAAA TRY AGAIN, LOOSER MATCH NULL !\n");
}

void play_game (int tab[][3], int joueur) {
  int pos_x;
  pos_x = 0;
  int  pos_y;
  pos_y = 0;
  int correct=FALSE;

  do {
    printf ("Joueur %d\n",joueur);
    pos_x= saisie_donnee ("Ligne : ");
    pos_y= saisie_donnee ("Colonne : ");

    if ( tab[pos_x-1][pos_y-1] == 1 ) {
      printf ("Try again, already occupied !\n");
    } else {
      tab[pos_x-1][pos_y-1]=joueur;
      correct=TRUE;
    }
  }
  while (! correct);

  draw_grid(tab);
}

int main ()
{
  int tab [3][3];
  int joueur=1;

  //la fonction memset = initialise chaque//                                      
  //octet d'une zone avec une valeur choisie//                                    
  //(valeur = 0)//                                                                
  memset(tab, 0, 3*sizeof (int));

  draw_grid(tab);

      do
        {
          play_game(tab, joueur);
          if ( joueur==1 ) {
            joueur=2;
          }
          else
            {
              joueur=1;
            }
        }
      while ((!win_game(tab)) && (!game_over(tab)));

      //return(0);                                                                

      //      void (*pointeur_1)(int * tab); //déclare pointeur sur fonction//   

      //pointeur_1;                                                               
      //pointeur_1 = &draw_grid;                                                  

}


