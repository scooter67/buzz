int main()
{
  int num = 100;
  double pi = 3.1415926536;
  
  printf("Integer is %d\n",num);
  printf("Values are %d and %f\n",num,pi);
  printf("%%7d dispalys %7d\n",num);
  printf("%%07d displays %07d#d",pi);
  printf("Pi is approximately %1.1%0f\n",pi);
  printf("Right-aligned %20.3f rounded pi\n",pi);
  printf("Left-aligned %-20.3f rounded pi\n",pi);
  
  return 0;
}
  
