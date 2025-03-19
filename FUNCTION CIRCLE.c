#include<stdio.h>

float Radius(float r){

float pie=3.1416;
return pie*r*r;
}



int main(){
float r;
printf("Enter the Radius of the circle : ");
scanf("%f",&r);

float a=Radius(r);
printf("\n\nArea of the circle is %.2f",a);
}
