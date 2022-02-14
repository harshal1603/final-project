#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
int len;
int bin[20];
int i=0;
int dec;
printf("enter number\n");
scanf("%d",&dec);
while(dec>0){
bin[i]=dec%2;
dec=dec/2;
i++;
}
printf("binary before reversal\n");
for(int j=i-1;j>=0;j--){
printf("%d ",bin[j]);

}
printf("\n");
printf("binary after reversal\n");
for(int j=0;j<i;j++){
printf("%d ",bin[j]);
}
printf("\n");

}


