#include <stdio.h>
#include <stdlib.h>

char main()
{
    char a;
    printf("Enter the name: ");
    scanf("%c",&a);
    printf("The name is %c",a);
    printf("\nThe name is stored at %d",&a);
    return 0;
}
