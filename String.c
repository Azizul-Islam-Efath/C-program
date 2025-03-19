#include<stdio.h>
int main(){

char first[200]="I AM AZIZUL ISLAM EFATH ";
char sec[]="I AM A STUDENT OF SOFTWARE ENGINEERING AT DAFFODIL INTERNATIONAL UNIVERSITY";
printf("THE FIRST STRING IS:%s\n",first);
printf("THE SECOND STRING IS:%s\n",sec);





int i=0,j=0,count=0;
while(first[i]!='\0'){
    printf("%c\n",sec[i]);
    i++;
    count++;
    }
    printf("THE LENGTH OF THE STRING IS: %d \n",count);
 while(sec[j]!='\0'){
    first[count+j]=sec[j];
    j++;
 }
 printf("THE FINAL STRING IS: %s",first);


}
