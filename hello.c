#include<stdio.h>
void main()
{
        unsigned int i = 0x76543210;
        char *c = (char*)&i;
        printf("value of *c=%x",*c);
        if(*c==76)
        {
                printf("big endian\n");
        }
        else
        {
                printf("little endian\n");
        }
}
