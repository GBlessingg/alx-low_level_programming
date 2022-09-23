#include "main.h"
#include <stdio.h>

void _strcat(){
  char s1[], s2[];
  int length, j;
  /* First store length of s1 in length variable */
  length = 0;
  while (s1[length] != '\0' {
    ++length;
  }
  /* concatenate s1 and s2
  for (j=0; s2[j] != '\0'; ++j, ++length) {
  s1[length] = s2[j];
  }
  /* terminating s1 string */
         s1[length] = '\0';
         printf("After concatenation: ");
         puts(s1);
  }
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
  char s1[98] = "Hello ";
  char s2[] = "World!\n";
  char *ptr;
  
  printf("%s\n", s1);
  printf("%s", s2);
  ptr = _strcat(s1, s2);
  printf("%s", s1);
  printf("%s", s2);
  printf("%s", ptr);
  
  return 0;
  )
