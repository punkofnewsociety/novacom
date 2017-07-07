#include <stdio.h>

void tohex(unsigned char * in, size_t insz, char * out, size_t outsz)
{
    unsigned char * pin = in;
    const char * hex = "0123456789ABCDEF";
    char * pout = out;
    for(; pin < in+insz; pout +=2, pin++){
        pout[0] = hex[(*pin>>4) & 0xF];
        pout[1] = hex[ *pin     & 0xF];
        if (pout + 2 - out > outsz){
            break;
        }
    }
    pout[-1] = 0;
}

void main()
{
    enum {insz = 4, outsz = 2*insz};
    unsigned char buf[] = {0xA1, 0x1D, 0xBB, 0xFF};
    char str[outsz];
    tohex(buf, insz, str, outsz);
    printf("%s\n", str);
}
