#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
void rev_string()
{
  strrev(s);
}
int main(void)
{
  char s[10] = "My School";
  
  printf("a=%s", s);
  rev_string(s);
  printf("a=%s", s);
  return (0);
 }
