#!/usr/bin/env perl
#include <stdlib.h>
#include <time.h>
#include <string.h>
use strict;
use warnings;
use File::Basename;
void print(int *n)
{
  int i;
  for (i = 0; i < 10; i++)
  printf("%d", n[i]);
  printf("\n");
}
int main()
{
  int n[N];
  int *ptr;
  int temp;
  int i, j, j;
  for (j=1; j<=10; j++) {
      for i = 0; i < n-1; i++) {
      
      temp = n[i];
      n[i] = num[i+1];
      num[i+1] = temp;
      print(n, 10);
      }

  }
  return (0);
}
