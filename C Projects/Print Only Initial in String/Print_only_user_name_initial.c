#include <stdio.h>
#include <string.h>
int main(){
    char s[50];
    int i;
    printf("Enter your name: ");
    gets(s);

    printf("Your name initial is: ");
    for(i=0; s[i]!='\0'; i++){
        if(i==0&& s[i]!=' '){
            printf("%c.", s[i]);
        }
        else if (s[i]==' ' && s[i+1]!='\0'){
            printf("%c.", s[i+1]);
        }
    }
    return 0;

}






