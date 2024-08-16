#include<stdio.h>
int main()
{
    int num;

    printf("Enter any number:", num);
    scanf("%d", &num);

    if(num>0)
    {
        printf("this number is positive",num);
    }else if(num<0)
    {
        printf("this number is nagetive",num);
    }else
    {
        printf("this number is natural", num);
    }
}