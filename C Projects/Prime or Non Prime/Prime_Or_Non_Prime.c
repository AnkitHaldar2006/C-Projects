#include<stdio.h>
int main(){
    int i,n,count=0;

    printf("Enter number: ");
    scanf("%d",&n);

    for(i=2;i<=n-1;i++)
    {
        if (n%i==0)
        {
            count=1;
            break;
        }
    }
        if (count==0)
        {
            printf("Number is prime");
        }
        else
        {
            printf("Number is not prime");
        }
        
    
    
}
