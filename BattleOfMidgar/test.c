#include <stdlib.h>
#include <time.h>

int	rand(int nb)
{

  srand(time(NULL));
  nb = (rand() % 3);
  return(nb);


}

int main()
{
  int i = 10;
  rand(i);
  return(0);

}
