#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x,y;
    printf("Input ywo integraters : ");
    scanf("%i %i",&x,&y);
    
    printf("%i+%i=%i \n",x,y,x+y);
    printf("%i+%i=%i \n",x,y,x-y);
    printf("%i+%i=%i \n",x,y,x*y);
    printf("%i+%i=%i \n",x,y,x/y);
    printf("%i+%i=%i \n",x,y,x%y);
  system("PAUSE");	
  return 0;
}
