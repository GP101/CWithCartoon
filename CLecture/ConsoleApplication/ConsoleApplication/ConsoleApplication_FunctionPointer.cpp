#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Sum( int a, int b )
{
    return a + b;
}

typedef int(*FP)( int, int );

int Greater( int a, int b )
{
    return a > b;
}

int Less( int a, int b )
{
    return a < b;
}

typedef int( *COMPARE )( int a, int b );

void Sort( int a[ 5 ], COMPARE comp )
{
    for( int i = 0; i < 5; ++i )
    {
        for( int j = i + 1; j < 5; ++j )
        {
            if( comp(a[ i ], a[ j ]) )
            {
                int t = a[ i ];
                a[ i ] = a[ j ];
                a[ j ] = t;
            }
        }
    }//for
}

void main()
{
    int a[ 5 ] = { 5, 7, 1, 3, 9 };
    Sort( a, Greater );
    for( int i = 0; i < 5; ++i )
    {
        printf( "%i, ", a[ i ] );
    }
}
