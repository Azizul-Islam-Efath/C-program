//1*1+2*2+3*3+.....+20*20
#include<stdio.h>
int main() {
    int sum=0;
    for(int i=1; i<=20; i++) {
        sum= sum + i*i;
    }
    printf("%d\n", sum);
    return 0;
}