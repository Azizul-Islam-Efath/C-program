#include<stdio.h>

void Power(int x,int y,int sum){
for(int i=1;i<=y;i++){
    sum=sum*x;
}
printf("The value of the %d^%d is : %d ",x,y,sum);
}

int main(){
int x,y,sum=1;
printf("Enter an integer value: ");
scanf("%d",&x);
printf("Enter The power: ");
scanf("%d",&y);

Power(x,y,sum);


}

