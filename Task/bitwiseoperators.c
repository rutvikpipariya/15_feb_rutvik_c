#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter Two value :");
    scanf("%d%d",&a,&b);
    printf("\nBitwise And is:%d",a&b);
    printf("\nBitwise Or is:%d",a|b);
    printf("\nBitwise Left swifft is:%d",a<<b);
    printf("\nBitwise Right Swift is:%d",a>>b);
    printf("\nBitwise Not is:%d",!(a|b));
    printf("\nBitwise compliment:%d",~a);
    printf("\nBitwise XOR:%d",a^b);

}
