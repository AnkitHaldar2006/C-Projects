#include<stdio.h>
#include<string.h>
int main(){

    char str[50], str2[50];
    int result;
    printf("Enter two strings:");
    scanf("%s %s", str, str2);
    result = strcmp(str, str2);

    if (result==0)
    {
        printf("Strings are equal.");
    }
    else
    {
        printf("Strings are not equal.");
    }

return 0;

}
