#include<stdio.h>

//Creating a function
//Data_type function_name(datatype variable,datatype variable)
int sum(int a,int b)
{
   return a+b; //returntype
}


int main(){


int num1,num2;

printf("ENTER TWO NUMBER: ");
scanf("%d %d",&num1,&num2);

printf("THE SUM OF THE NUMBER IS : %d",sum(num1,num2)); //Calling the function







}


