/*
 * guests3.c
 * read guest data using a linked list
 */
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int status;

  struct data_t
  {
    char firstname[64];
    char lastname[64];
    int age;
    struct data_t *next;
  };
  typedef struct data_t person_t;

  /* initialize the empty list with a null pointer */
  person_t *list = 0;

  do
  {
    /* allocate memory for a person_t */
    person_t *p = (person_t*) malloc(sizeof(person_t));
    status = scanf("%s %s %d", p->firstname, p->lastname, &p->age);
    if ( status != EOF ) 
    {
      /* insert person_t *p in the list */
      p->next = list;
      list = p;
    }
  }
  while ( status != EOF );

  /* traverse the list to print all elements */
  person_t *p = list;
  while ( p )
  {
    printf("%12s %12s %8d\n",p->firstname,p->lastname,p->age);
    p = p->next;
  }
  return 0;
}
