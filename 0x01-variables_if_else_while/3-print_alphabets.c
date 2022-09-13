#!/usr/bin/env perl
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
use strict;
use warnings;
use File::Basename;
int main()
{
    int i, j;
    for (i = 'A'; j= 'a'; i<='Z'; j<='z'; i++; j++)
    {
        printf("%C\n", i, j);
    }
    return (0);
}
