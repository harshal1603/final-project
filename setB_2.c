#include<stdio.h>
#include<string.h>
void main(){

int indexg=0;
int indexgs=0;
int pos=0;
FILE *fp,*f,*c;
char str[50];
char cmp[50];
char ip[50];
c=fopen("child.txt","r+");
f=fopen("father.txt","r+");
fp=fopen("proj3.txt","r");
int i=0;
printf("enter name\n");
scanf("%s",ip);
while(!feof(fp)){
fscanf(fp,"%s",str);
if(i%2!=0){
fprintf(f,"%s ",str);
}
else{
fprintf(c,"%s ",str);
}
i++;
}
fclose(c);
fclose(f);
c=fopen("child.txt","r+");
f=fopen("father.txt","r+");


//index of grandfather
while(strcmp(str,ip)!=0){
fscanf(f,"%s",str);
indexg++;

}

fclose(c);
fclose(f);
c=fopen("child.txt","r+");
f=fopen("father.txt","r+");
int size=0;
while(!feof(f)){
fscanf(f,"%s",cmp);
size++;
}
//printf("%d",size);

while(indexg--){
fscanf(c,"%s",str);
}
fclose(c);
fclose(f);
c=fopen("child.txt","r+");
f=fopen("father.txt","r+");
int ans=0;
while(--size){
fscanf(f,"%s",cmp);
//printf("%s",cmp);
if(strcmp(str,cmp)==0){
ans++;
}
}
fclose(fp);
fclose(c);
fclose(f);
printf("%d\n",ans);




}
