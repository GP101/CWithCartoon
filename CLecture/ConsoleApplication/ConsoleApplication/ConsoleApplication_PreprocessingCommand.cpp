#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define PI          3.1415
#define MYMAX(a,b)  ((a) > (b) ? (a) : (b))

void main()
{
#if defined(_DEBUG) && defined(WIN32)
    printf( "%g\r\n", PI );
#endif

    printf( "%i\r\n", MYMAX( 2, 3 > 1 ) );

}
