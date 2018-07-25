#include <stdio.h>

void Swap( int* i, int* j )
{
    int t = *i;
    *i = *j;
    *j = t;
}

void main()
{
    int i = 2;
    int j = 3;
    int t;

    Swap( &i, &j );

    printf( "%i, %i\r\n", i, j );
}
