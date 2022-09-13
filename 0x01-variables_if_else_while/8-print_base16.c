#!/usr/bin/env perl

use strict;
use warnings;
use File::Basename;
#include <stdio.h>
int main()
{
   int n;
  printf("Enter the digit: ");
  scanf("%d", &n);
  printf("%x", n);
  printf("\n");
  printf("%X",n);
  return (0);
}
