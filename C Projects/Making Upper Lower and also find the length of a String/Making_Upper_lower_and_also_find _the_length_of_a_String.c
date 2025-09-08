#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
//Input String
    printf("Enter a String");
    gets(str);

    //Convert to Uppercase
     printf("String in Uppercase:%s\n",strupr(str));

    //Convert to lower case
     printf("String in Lowercase:%s\n",strlwr(str));

     //Find the Length of the String
     printf("Length of the String:%d\n",strlen(str));

     return 0;
}