#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
void string_toupper() {
  char str[], ptr[];
  int i;
  while (str[i]!='\0')
  {
  ptr[i] = str[i] - 32;
    i++;
}
  printf("\n The uppercase = %s", ptr);
}
int main(void)
{
  char str[] = "Look up!\n";
  char *ptr;
  ptr = string_toupper(str);
  printf("%s", ptr);
  printf("%s", str);
  
  return 0;
  )
