#include <stdio.h>

int main()
{
    int n, reversed;
    printf("enter number:");
    scanf("%d", &n);

    reversed=n%10;
    printf("%d",reversed);
    reversed=n/10;
    reversed=reversed%10;
    printf("%d",reversed);
    reversed=n/100;
    printf("%d\n",reversed);

    

}