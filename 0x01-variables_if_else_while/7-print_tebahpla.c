#!/usr/bin/env perl

#include <stdio.h>
use strict;
use warnings;
use File::Basename;
int main()
{

    int i;
    for (i = 'z'; i>='a'; i--)
    {
        printf("%C\n", i);
    }
    return (0);
}
