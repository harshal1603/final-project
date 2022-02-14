int push(char a[],int *t,char e,int n){
//printf("\nin push\n");
if(*t>=n){
printf("stack overflow\n");
return 0;
}
else{
*t=*t+1;
//printf("%d\n",*t);
a[*t]=e;
//printf("value of x is %c\n",a[*t]);
return 1;
}
}

char pop(char a[],int *t){
//printf("in pop");
if(*t==-1){
printf("underflow");
return 0;
}
else{
//strcpy(data,a[*t]);
//printf("deleted element is %c \n",a[*t]);
*t=*t-1;
return a[*t+1];
}
}

char peep(char a[],int *t,int i){
if(*t-i+1<0){
printf("underflow");
}
else{
return a[*t-i+1];

}
}


int change(char a[],int *t,int i,int j){
if(*t-i+1<0){
printf("underflow");
return 0;
}
else{
a[*t-i+1]=j;
return 1;

}
}
