#include<stdio.h>
#include<string.h>
#include "help.h"
int main()
{
    while(1)
    {
        int choice;
        printf("Select a choice: \n 1.Addition \n 2.Multiplication \n 3.Exit \n");
        printf("Enter a choice: ");
        scanf("%d", &choice);
        if(choice==1)
        {
            char unary1[500],unary2[500];
            printf("Enter two unary no.s: ");
            scanf("%s %s", unary1,unary2);
            if(validunary(unary1)==1 && validunary(unary2)==1)
            {
                strcat(unary1,unary2);
                printf("Sum is: %s\n",unary1);
            }
        }
        else if(choice==2)
        {
            char unary1[500],unary2[500];
            printf("Enter two unary no.s: ");
            scanf("%s %s", unary1,unary2);
            if(validunary(unary1)==1 && validunary(unary2)==1)
            {
                printf("Product is: ");
                for(int i=0;i<strlen(unary2);i++)
                {
                    printf("%s",unary1);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Exiting..");
            break;
        }
    }
    return 0;
}
