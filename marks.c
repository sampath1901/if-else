#include<stdio.h>
int main()
{
	printf("enter marks\n");
	int marks=0;
	scanf("%d",&marks);
	if(marks>=85 && marks<=100)
		printf("GRADE A");
	else
	if(marks>=70 && marks<=84)
		printf("GRADE B");
	else
	if(marks>=55 && marks<=69)
		printf("GRADE C");
	else
	if(marks>=40 && marks<=54)
		printf("GRADE D");
	else 
		printf("GRADE F");	
}
