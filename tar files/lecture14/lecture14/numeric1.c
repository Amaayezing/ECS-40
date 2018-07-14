/*
 * numeric1.c
 */
#include <stdio.h>

int main() 
{
  double a = 1.23456789;
  double b = 5432.0;
  double c = 1.0e-18;

  printf("default f format:\n");
  printf("%f\n",a);
  printf("%f\n",b);
  printf("%f\n",c);

  printf("using 12.5f format:\n");
  printf("%12.5f\n",a);
  printf("%12.5f\n",b);
  printf("%12.5f\n",c);

  printf("using 12.5e format:\n");
  printf("%12.5e\n",a);
  printf("%12.5e\n",b);
  printf("%12.5e\n",c);
}
