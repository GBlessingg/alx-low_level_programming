#!/usr/bin/env perl
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
use strict;
use warnings;
use File::Basename;
int main()
{
  int i;
  for (i='a'; i<='z'; i++)
  { printf("%\n", i);
  }
  return(0);
}
