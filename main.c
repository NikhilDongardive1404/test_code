#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    printf("Enter the Numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    c = a + b;
    d = a - b;
    e = a*b;
    f = a/b;
    g = a%b;
    printf("The addition of the number is %d\n",c);
    printf("The substraction of the number is %d\n",d);
    printf("The multiplication of the number is %d\n",e);
    printf("The division of the number is %d\n",f);
    printf("The modulus of the number is %d\n",g);
    return 0;
}
