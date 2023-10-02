#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    printf("Input seconds : ");
    scanf("%i",&x);
    printf("%i seconds - %i m : %i s \n",x,x/60,x%60);
    
  system("PAUSE");	
  return 0;
}
