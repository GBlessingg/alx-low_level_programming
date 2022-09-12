#!/usr/bin/env perl
#include <stdlib.h>
#include <time.h>
/* more headers */

/* betty style doc for function main */
int main(void)
{
  int n, d;
  
  srand(time(0));
  n = rand() - RAND_MAX /2;
  scanf("%d|. &n);
  d = n % 10;
  printf("The last digit of %d is: %d", n, d);
  return(0);
}
