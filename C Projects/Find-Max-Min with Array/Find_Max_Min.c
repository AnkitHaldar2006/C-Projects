#include <stdio.h>

int main() {
    int a[]={1,2,3,4,45,5,66,6,4};
    int n=sizeof(a)/sizeof(a[0]);


    int max=a[0];
    int min=a[0];


  
    

    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
       if (a[i]<min)
       {
        min=a[i];
       }  
    }

    printf("the bigest num is %d\n",max);
    printf("the smallest num is %d",min);
    
    return 0;
}
