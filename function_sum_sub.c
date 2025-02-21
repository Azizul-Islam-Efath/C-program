#include<stdio.h>
int sum(int a,int b){
return a+b;
}

int sub(int c,int d){
return c-d;
}

int main(){

int num1,num2;
printf("Enter two number: ");
scanf("%d %d",&num1,&num2);

printf("The Sub of the two number is : %d \n",sub(num1,num2));
printf("The Sum of the two number is : %d \n",sum(num1,num2));


}
