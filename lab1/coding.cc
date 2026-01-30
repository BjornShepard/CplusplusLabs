#include<coding.h>
#include<iostream>

unsigned char encode(unsigned char c)
{
    return c+31;
}
unsigned char decode(unsigned char c)
{
    return c-31;
}

