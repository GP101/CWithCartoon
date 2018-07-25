#include <iostream>

struct BITFIELD
{
    unsigned m0 : 4;
    unsigned m1 : 4;
    unsigned m2 : 4;
    unsigned m3 : 4;
    unsigned m4 : 4;
    unsigned m5 : 4;
    unsigned m6 : 4;
    unsigned m7 : 4;
};//struct BITFIELD

union FLOAT
{
    float f;
    BITFIELD b;
};//union FLOAT

void main()
{
    FLOAT f;

    f.f = -14.24;
    printf( "%g\r\n", f.f );
    printf( "%x%x%x%x%x%x%x%x\r\n", f.b.m0, f.b.m1, f.b.m2, f.b.m3
        , f.b.m4, f.b.m5, f.b.m6, f.b.m7 );
    // output: c163d70a
    // actual output: a07d361c

}
