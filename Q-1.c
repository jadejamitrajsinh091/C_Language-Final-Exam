#include<stdio.h>


int addittion(int a,int b)
{
    return a+b;
}

int substraction(int a,int b)
{
    return a-b;
}

int multiplication(int a,int b)
{
    return a*b;
}

int division(int a,int b)
{
    return a/b;
}

int modulo(int a,int b)
{
    return a%b;
}



int main()
{
    int choice;
    int a,b,ans;

    while(1)
    {
        printf("\n\nPress 1 for +");
        
        printf("\nPress 2 for -");
        
        printf("\nPress 3 for *");
        
        printf("\nPress 4 for /");
        
        printf("\nPress 5 for %%");
        
        printf("\nPress 0 for Exit");


        printf("\n\nEnter choice: ");
        scanf("%d",&choice);


        if(choice==0)
        {
            printf("Exit");
            break;
        }

        printf("Enter first number: ");
        scanf("%d",&a);

        printf("Enter second number: ");
        scanf("%d",&b);


        switch(choice)
        {
            case 1:
                ans = addittion(a,b);
                printf("\n\nAnswer = %d",ans);
                break;

            case 2:
                ans = substraction(a,b);
                printf("\n\nAnswer = %d",ans);
                break;

            case 3:
                ans = multiplication(a,b); 
                printf("\n\nAnswer = %d",ans);
                break;

            case 4:
                ans = division(a,b);
                printf("\n\nAnswer = %d",ans);
                break;

            case 5:
                ans = modulo(a,b);
                printf("\n\nAnswer = %d",ans);
                break;


            default:
            printf("\n\nInvalid Choice!");
        }
    }

    return 0;
}
