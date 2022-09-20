#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
void _strlen(str)
{
  char str[] = "My first strlen!";
  int i;
  
  for (i = 0; str[i] != '\0'; ++i);
  printf("Length of the string: %d", i);
}
int main(void)
{
  char *str;
  int len;
  
  str = "My first strlen!";
  len = _strlen(str);
  
  printf("a=%d", len);
  
  return (0);
 }
