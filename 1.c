#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*
uint8_t st;
uint8_t res;
switch (st)
{
case 0: res=26; break;
case 1: res=65; break;
case 2: res=234;break;
case 3: res=31; break;
case 4: res=25;
case 5: res=25;
case 6: res=25; break;
}
*/

void main()
{

    time_t t;
    uint8_t st;
    uint8_t res[7] = { 26, 65, 234, 31, 25, 25, 25 };
    srand((unsigned) time(&t));
    st = res[rand()%7];
    printf("here it is %d", st);
    return;

}
