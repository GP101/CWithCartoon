#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct People // type definition
{
    int age; // member variable
    char name[ 10 ];
};

void PrintPeople( People* a )
{
    printf( "%s : %i\r\n", a->name, a->age );
}

void SetAge( People* a, int newAge )
{
    a->age = newAge;
}

void main()
{
    People* b;

    b = ( People*)malloc( sizeof( People ) );
    b->age = 48;
    strcpy( b->name, "World" );

    SetAge( b, b->age + 1 );
    PrintPeople( b );
    free( b );
}
