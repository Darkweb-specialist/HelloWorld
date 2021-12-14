#include<stdio.h>

int factorial(int number)
{
    if (number==0 || number==1)
    {
        return 1;
    }

    else
    {
        return (number*factorial(number -1));
    }
    
}
int main()
{
    int num;
    printf("Enter the value of factorial:");
    scanf("%d",&num);
    printf("The factorial of %d is %d. ",num,factorial(num));
    return 0;
}