#include<stdio.h>

void SUM(int size){
int arr[size];
int i,sum=0;
printf("Enter the elements of the array:\n");
for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

printf("Element of the array is: \n");
for(i=0;i<size;i++){
    printf("Index[%d] = %d\n",i,arr[i]);
}

for(i=0;i<size;i++){
    sum=sum+arr[i];
}

printf("Sum of the element is = %d",sum);

}



int main(){
int size;
printf("Enter the size of the array : ");
scanf("%d",&size);

SUM(size);
}

