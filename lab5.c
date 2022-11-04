#include<stdio.h>
void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 8; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}
 
int main(void)
{
    bin(5);
    printf("\n");
  
    
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9; 
  
    // The result is 00001010 
    printf("a<<2 = %d\n", a<<2);
    
    // The result is 00010010 
    printf("a>>4 = %d\n", a>>4);  
    return 0;
}
