
// #include <stdio.h>

// int main()
// {
//     int x,num,octal,remainder_1,remainder_2,remainder_3,remainder_4,remainder_5=0;
//     printf("enter a number between 0 and 32767:");
//     scanf("%d",&num);

//     x=num/8;
    
//     remainder_1 = num % 8;

//     remainder_2 = x % 8;

//     remainder_3 = (x/8) % 8;

//     remainder_4 = ((x/8)/8) % 8;

//     printf("octal=%d%d%d%d%d\n",remainder_5,remainder_4,remainder_3,remainder_2,remainder_1);



// }
//BINARY CONVERSION

/*C program to convert number from decimal to binary*/
 
#include <stdio.h>
 
int main()
{
    int number,cnt,i;
    int bin[32];
 
    printf("Enter decimal number: ");
    scanf("%d",&number);
 
    cnt=0;              /*initialize index to zero*/
    while(number>0)
    {
        bin[cnt]=number%2;
        number=number/2;
        cnt++;
    }
 
    /*print value in reverse order*/
    printf("Binary value is: ");
    for(i=(cnt-1); i>=0;i--)
        printf("%d\n",bin[i]);
 
    return 0;
}

/*C program to convert number from decimal to octal*/
 
#include <stdio.h>
 
int main()
{
    int number,cnt,i;
    int  oct[32];
 
    printf("Enter decimal number: ");
    scanf("%d",&number);
 
     
    cnt=0;              /*initialize index to zero*/
    while(number>0)
    {
        oct[cnt]=number%8;
        number=number/8;
        cnt++;
    }
 
    /*print value in reverse order*/
    printf("Octal value is: ");
    for(i=(cnt-1); i>=0;i--)
        printf("%d",oct[i]);
    
    return 0;
}

/*C program to convert number from decimal to hexadecimal*/
 
#include <stdio.h>
 
int main()
{
    int number,cnt,i;
    char    hex[32];    /*bcoz it contains characters A to F*/
 
    printf("Enter decimal number: ");
    scanf("%d",&number);
 
     
    cnt=0;              /*initialize index to zero*/
    while(number>0)
    {
        switch(number%16)
        {
            case 10:
                hex[cnt]='A'; break;
            case 11:
                hex[cnt]='B'; break;
            case 12:
                hex[cnt]='C'; break;
            case 13:
                hex[cnt]='D'; break;
            case 14:
                hex[cnt]='E'; break;
            case 15:
                hex[cnt]='F'; break;
            default:
                hex[cnt]=(number%16)+0x30;  /*converted into char value*/
        }
        number=number/16;
        cnt++;
    }
 
    /*print value in reverse order*/
    printf("Hexadecimal value is: ");
    for(i=(cnt-1); i>=0;i--)
        printf("%c",hex[i]);
 
    return 0;
    
}

