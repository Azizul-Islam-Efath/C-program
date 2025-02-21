#include<stdio.h>

double area(float a, float b)
{
    float Area = .5*a*b;
printf("The area of the triangle is : %.2f",Area);
}

int main(){
float Height,weidth;

printf("ENTER THE HEIGHT AND THE WEDTH OF A TRIANGLE...!\n ");
printf("HEIGHT: ");
scanf("%f",&Height);
printf("\n");
printf("WEIDTH: ");
scanf("%f",&weidth);

area(Height,weidth);

}
