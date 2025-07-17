#include<stdio.h>
int main(){
	char answer;
	int score=0;
	printf("Welcome to the Quiz Game\n");
	printf("Enter your Answer(A/B/C/D) For Each Question.\n");
	
//Question 1	
	printf("1.What is the Capital Of our India?\n");
	printf("A. Delhi\nB. Mumbai\nC. Kolkata\nD. Chennai\n");
    printf("your Answer: ");
    scanf(" %c",&answer);
if(answer=='A'||answer=='a')score++;

	
//Question 2	
	printf("2.Who is the founder of Microsoft?\n");
	printf("A. Elon Musk\nB. Bill Gates\nC. Steve Jobs\nD. Mark Zuckerberg\n");
    printf("your Answer: ");
    scanf(" %c",&answer);
if(answer=='B'||answer=='b')score++;

	
//Question 3	
	printf("3.What is the value of 5*5+2?\n");
	printf("A. 20\nB. 30\nC. 27\nD. 25\n");
    printf("your Answer: ");
    scanf(" %c",&answer);
if(answer=='C'||answer=='c')score++;

	
//Question 4	
	printf("4.Who is the CEO of Google?\n");
	printf("A. Sundar Bose\nB. Sundar Roy\nC. Sudar lal\nD. Sundar Pichai\n");
    printf("your Answer: ");
    scanf(" %c",&answer);
if(answer=='D'||answer=='d')score++;

	
//Question 5	
	printf("5.Which is the largest ocean?\n");
	printf("A. Pacific\nB. Indian\nC. Arctic\nD. Atlantic\n");
    printf("your Answer: ");
    scanf(" %c",&answer);
if(answer=='A'||answer=='a')score++;

	
//Question 6	
	printf("6.Which planet is known as the Red Planet??\n");
	printf("A. Earth\nB. Mars\nC. Jupiter\nD. Pluto\n");
    printf("your Answer: ");
    scanf(" %c",&answer);
if(answer=='B'||answer=='b')score++;

	
//Question 7	
	printf("7.Which is the latest model of Samsung S Series?\n");
	printf("A. Galaxy S23\nB. Galaxy S25+\nC. Galaxy S25\nD. Galaxy S21\n");
    printf("your Answer: ");
    scanf(" %c",&answer);
if(answer=='C'||answer=='c')score++;

	
//Question 8	
	printf("8.Which Country invented UPI payment?\n");
	printf("A. Austrelia\nB. Brazil\nC. Canada\nD. India\n");
    printf("your Answer: ");
    scanf(" %c",&answer);
if(answer=='D'||answer=='d')score++;

	
//Question 9	
	printf("9.How many times Brazil Won Fifa World Cup?\n");
	printf("A. 5\nB. 3\nC. 6\nD. 4\n");
    printf("your Answer: ");
    scanf(" %c",&answer);
if(answer=='A'||answer=='a')score++;

	
//Question 10	
	printf("10.Which year Mohonbagan won the first Shield?\n");
	printf("A. on July 22, 1912\nB. on June 29, 1911\nC. on October 10, 1908\nD. on January 12, 1910\n");
    printf("your Answer: ");
    scanf(" %c",&answer);
if(answer=='B'||answer=='b')score++;


//Result
printf("Your Scored %d Out of 10!\n");

if(score==10){
	
printf("Excellent\n");
	
}else if(score>=5){


printf("Good Job!\n");

}else{
	
	printf("Better luck Next Time.");
	
}

return 0;
}
