#include <stdio.h>
#include <string.h>

void main()
{
    int a[ 2 ][ 4 ] = { {1,3,5,7}, {10,30,50,70} };
    int* ap0;
    int* ap1;
    ap0 = a[ 0 ];
    ap1 = a[ 1 ];
    printf( "%i, %i\r\n", *(ap0+0), *(ap1+1) );
}
