/*
 * badmacro.c
 */

/* This program cannot be compiled by gcc (it generates an error)
   The reason is that the macro BUFSIZ is defined in the stdio.h header */

#include<stdio.h>
int main()
{
  const int BUFSIZ = 50;
  int buffer[BUFSIZ];
  scanf("%d",buffer[0]);
  printf("%d\n",buffer[0]);
  return 0;
}
