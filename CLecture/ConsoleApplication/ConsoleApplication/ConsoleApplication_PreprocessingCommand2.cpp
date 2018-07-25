#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "Header1.h"
#include "Header2.h"

#define CONCAT(a,b)     a##b

void Test()
{
    printf( "%s\r\n", __FUNCTION__ );
}

void main()
{
    Test1 t;
    Test2 t2;

    printf( "%i\r\n", __LINE__ );
    printf( "%i\r\n", __LINE__ );
    printf( "%s\r\n", __FUNCTION__ );
    Test();
    int i0 = 1;
    int i1 = 2;
    int ij = 3;
    printf( "%i\r\n", CONCAT( i, 0 ) );
    printf( "%i\r\n", CONCAT( i, 1 ) );
}
