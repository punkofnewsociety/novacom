#include <stdio.h>
#include <stdint.h>


unsigned long long  swap_int64( unsigned long long  val )
{
    val = ((val << 8) & 0xFF00FF00FF00FF00ULL ) | ((val >> 8) & 0x00FF00FF00FF00FFULL );
    val = ((val << 16) & 0xFFFF0000FFFF0000ULL ) | ((val >> 16) & 0x0000FFFF0000FFFFULL );
    return (val << 32) | ((val >> 32) & 0xFFFFFFFFULL);
}

void main()
{

    unsigned long long invalue,outvalue;		
	invalue = '0xABCD' ;
	outvalue = swap_int64(invalue);
	printf("%llx\n", invalue);
	printf("%llx\n", outvalue);
	return;

}
