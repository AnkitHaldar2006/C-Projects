#include<stdio.h>
int main(){

int n,rem,rev=0,temp;	

printf("Enter A Number: ");
scanf("%d",&n);
temp=n;

while(temp>0){
	
	rem=temp%10;
	rev=rev*10+rem;
	temp=temp/10;
}	
	if(rev==n){
		printf("This is a Palindrome Number.");
	}else{
		printf("This is not a Palindrome Number.");
	}
	return 0;
}

