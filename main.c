#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a,hour,minite,second;
    printf("Input seconds : ");
    scanf("%i",&a);
    hour=a/3600;
    minite=(a-hour*3600)/60;
    second=(a-hour*3600-minite*60);
    printf("The time for %i s is %i H : %i M : %i S\n",a,hour,minite,second);

  system("PAUSE");	
  return 0;
}
