#include <studio.h>
#include <limits.h>

int main() 
{
  printf("short int... \n\t size %d bytes %\t,sizeof(short int));
  printf("%d to %d \n",SHRT_MAX,SHRT_MIN);
  
  printf("long int...\t size: %d bytes \t",sizeof(long int));
  printf("%ld to %ld\n,LONG_MAX,LONG_MIN);
  
  printf("char..\tsize %d byte\n",sizeof(char));
  printf("float..\tsize %d bytes\n",sozeof(float));
  printf("double...\tsize: %d bytes\n",sizeof(double));
  return 0;
}
