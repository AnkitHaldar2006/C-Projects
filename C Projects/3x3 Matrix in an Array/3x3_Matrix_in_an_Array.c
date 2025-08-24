 #include<stdio.h>
  int main(){
 int mat[3][3],i,j;

 //Input Elements
 printf("Enter Elemnts: ");

 for(i=0;i<3;i++){
 for(j=0;j<3;j++){
 scanf("%d",&mat[i][j]);
    }
   }

   //Ouput or Displaying

   printf("This is Matrix:/n ");
   for(i=0;i<3;i++){
    for ( j = 0; j < 3; j++)
    {
        printf("%d",mat[i][j]);
    }
    printf("\n");
   }
   return 0;
 }