#!/usr/bin/env perl

#include <stdio.h>
use strict;
use warnings;
use File::Basename;
int main()
{

    int i;
    for (i = 'a'; i<='z'; i++)
    {
        printf("%C\n", i);
    }
    return (0);
}
