#include<stdio.h>

void Check(int a){

if(a%2==0){
    printf("%d is a Even number .",a);
}
else{
    printf("%d is a Odd number . ",a);
}

}









int main(){

int a;
printf("Enter an integer number : ");
scanf("%d",&a);
Check(a);
}
