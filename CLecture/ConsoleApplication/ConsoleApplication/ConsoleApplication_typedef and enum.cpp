#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum class DayOfWeek
{
    Sunday = 0,
    Monday = 1,
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6,
};

void main()
{
    DayOfWeek dow = DayOfWeek::Monday;
    printf( "%i\r\n", sizeof( DayOfWeek ) );
    //int i = DayOfWeek::Monday;
    if( dow == DayOfWeek::Monday )
    {
    }
    else if( dow == DayOfWeek::Tuesday )
    {
    }
}
