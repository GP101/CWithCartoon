#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int* ip = NULL;
    int( *ip2 )[ 10 ];
    //int* ip3[ 10 ]
    
    ip2 = new int[2][ 10 ];
    ip2[0][0] = 1;
    ip2[1][1] = 3;
    printf( "%i\r\n", ip2[1][1] );
    delete[] ip2;
}
