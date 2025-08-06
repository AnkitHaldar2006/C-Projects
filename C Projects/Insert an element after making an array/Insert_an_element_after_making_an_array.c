#include<stdio.h>
int main(){
	
	//creating an array
int arr[100],size,i,element;

printf("Enter the length of an array: ");
scanf("%d",&size);
	
for(i=0;i<size;i++){
	scanf("%d",&arr[i]);
}	
	printf("The array is: ");
	
	for(i=0;i<size;i++){
	printf("%d", arr[i]);
	}
	
printf("Enter the new element: ");
scanf("%d",&element);
arr[i]=element;
size++;

printf("The new array is: ");
	
for(i=0;i<size;i++){
	printf("%d",arr[i]);
}	
	
	
	return 0;
	
	
}
