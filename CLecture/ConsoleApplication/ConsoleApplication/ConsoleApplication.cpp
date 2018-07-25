#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

int Sum( int cnt, ... )
{
    //int* ap;
    va_list ap;
    int s = 0;
    //ap = &cnt;
    va_start( ap, cnt );
    for( int i = 0; i < cnt; ++i )
    {
        int k;
        //k = *(ap + 1);
        //ap = ap + 1;
        k = va_arg( ap, int );
        s += k;
    }
    //va_end( ap );
    return s;
}

void main()
{
    int s;
    s = Sum( 3, 10, 20, 30 ); // push by right to left
    printf( "%i\r\n", s );
}
