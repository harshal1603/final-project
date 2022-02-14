#include<stdio.h>
#include "stack.h"
#include<string.h>
char stack[20];
char str[20];
int top=-1;
int len;
void main(){
printf("enter length of string");
scanf("%d",&len);
printf("enter the string");
scanf("%s",str);
str[len];
stack[len+1];

for(int i=0;i<len;i++){
if(top==-1){
push(stack,&top,str[i],len);
}
else{
if(str[i]==stack[top]){
pop(stack,&top);
}
else{
push(stack,&top,str[i],len);
}
}
}
int len2;
char op[top];
len2=strlen(op);
int l=0;
if(top!=-1){
while(top>=0){
op[l]=pop(stack,&top);
l++;
}
for(int i=l-1;i>=0;i--){
printf("%c",op[i]);
}
printf("\n");
}
else{
printf("Empty String");

}


}
