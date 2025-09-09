#include<stdio.h>
#include<string.h>
int main(){
    char str[20],rev[20];
    int len,i,j;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    for(i=0,j=len-1;i<len;i++,j--){
        rev[i] = str[j];
    }
    rev[i] = '\0';
    printf("Reversed string: %s\n",rev);
    return 0;
}