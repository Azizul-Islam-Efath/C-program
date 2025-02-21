#include<stdio.h>


int fact(a){
    int i,result=1;
for(i=a;i>1;i--){
    result=result*i;

}
printf("THE FACTORIAL OF %d IS : %d",a,result);


}


int main(){
int num;
printf("Enter an integer : ");
scanf("%d",&num);
fact(num);


}
