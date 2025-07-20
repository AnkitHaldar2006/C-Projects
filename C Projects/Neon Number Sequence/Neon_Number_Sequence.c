#include<stdio.h>
int main(){
	int i,n,rem,sum=0,sq;
	printf("Enter Number: ");
	scanf("%d",&n);
	
sq=n*n;
	while(sq>0){
		rem=sq%10;
		sum=sum+rem;
		sq=sq/10;
		
	}
	
if(sum==n){
	
	printf("number is a neon number: %d",n);
	
}else{
	
	printf("Number is a not a neon number: %d",n);
	
}	
	
return 0;	
	
}
