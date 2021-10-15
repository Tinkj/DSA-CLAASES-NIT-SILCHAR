#include<stdio.h>
#include "help.h"
int main()
{
    while(1)
    {
        int choice;
        printf("Select a choice: \n 1. Addition \n 2. Multiplication \n 3. Exit \n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            long binary1,binary2;
            printf("Enter two binary no.s: ");
            scanf("%ld %ld",&binary1,&binary2);
            int i=0,reminder=0,sum[20];
            while(binary1!=0 || binary2!=0)
            {
                sum[i++]=(binary1%10 + binary2%10 + reminder)%2;
                reminder=(binary1%10 + binary2%10 + reminder)/2;
                binary1=binary1/10;
                binary2=binary2/10;
            }
            if(reminder!=0)
            {
                sum[i++]=reminder;
                i--;
                printf("Sum is: ");
                while(i>=0)
                { 
                    printf("%d\n",sum[i--]);
                }
            }
        }
        else if(choice==2)
        {
            long binary1,binary2,multiply=0;
            printf("Enter two binary no.s: ");
            scanf("%ld %ld",&binary1,&binary2);
            int digit,factor=1;
            while(binary2!=0)
            {
                digit=binary2%10;
                if(digit==1)
                {
                    binary1=binary1*factor;
                    multiply=binaryproduct(binary1,multiply);
                }
                else
                {
                    binary1=binary1*factor;
                    binary2=binary2/10;
                    factor=10;
                }
            }
            printf("Product is: %ld\n",multiply);
        }
        else
        {
            printf("Exiting..");
            break;
        }
    }
    return 0;
}
