#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
void cap_string(){
  char str[];
  int i;
  for (i = 0; str[i] != '\0'; i++)
  {
  /* First check if first letter is lower case letter */
    if(i == 0)
    {
      if((str[i] >='a' && str[i] <= 'z'))
        str[i] = str[i] - 32;
      continue;
    }
    if(str[i] == ' ') /* To check space between words */
    {
      /* If space is found, check next character */
      ++i;
      /* Check if next character is lower space */
      if((str[i] >='a' && str[i] <= 'z'))
        str[i] = str[i] - 32;
      continue;
  }
}
  else
  {
    /* All other up cases character should be in lowercase
    if(str[i] >= 'A' && str[i] <= 'Z')
    str[i] = str[i] + 32;
  }
  }
  printf("Capitalized string is: %s\n", str);
  }
int main(void)
{
  char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes. \nhello world! hello-world 0123456hello world\thello world.hello world\n";
  char *ptr;
  
  ptr = cap_string(str);
  printf("%s", ptr);
  printf("%s", str);
  
  return 0;
  )
