#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
void puts_half(str)
{
  char str[] = str;
  char halfstr[];
  int len, mid, i, k;
  
  len = strlen(str);
  mid = len/2;
  for (i = 0; i < mid; i++)
  {
    halfstr[i] = str[i];
  }
  halfstr[i] = '\0';
  printf("First half of the string: %s\n", halfstr);
}
int main(void)
{
  char *str;
  
  str = "0123456789";
  puts_half(str);
  return (0);
}
