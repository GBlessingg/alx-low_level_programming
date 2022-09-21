#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
void puts2()
{
  char str[] = str;
  int i = 0;
  
  while (str[i] != '\0')
  {
   printf("The character at %d index position = %c\n", i, str[i]);
  }
int main(void)
{
  char *str;
  
  str = "0123456789";
  puts2(str);
  return (0);
}
