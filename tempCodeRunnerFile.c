// Online C compiler to run C program online

#include <stdio.h>

int main()
{
    int size;
    int array[10]={1,2,3,4,5,6,7,8,9};
    int max = array[0];
    for(int i=0;i<10;i++)
    {
        if(max<array[i])
        {
            max = array[i];
        }
    }
    
    printf("The maximum number is : %d",max);
    
}
