#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
while(n>0){
int a,b,t,i,j,l,r,flag=0;
char w1[10],w2[10];
scanf("%s%s%d%d",&w2,&w1,&l,&r);
    if(strcmp(w1,"monday"))
        a=1;
    if(strcmp(w1,"tuesday"))
        a=2;
    if(strcmp(w1,"wednesday"))
        a=3;
    if(strcmp(w1,"thurday"))
        a=4;
    if(strcmp(w1,"friday"))
        a=5;
    if(strcmp(w1,"saturday"))
        a=6;
    if(strcmp(w1,"sunday"))
        a=7;
    if(strcmp(w2,"monday"))
        b=1;
    if(strcmp(w2,"tuesday"))
        b=2;
    if(strcmp(w2,"wednesday"))
        b=3;
    if(strcmp(w2,"thurday"))
        b=4;
    if(strcmp(w2,"friday"))
        b=5;
    if(strcmp(w2,"saturday"))
        b=6;
    if(strcmp(w2,"sunday"))
        b=7;
    t=b-a+1;
    if((r-l)>=6){
        printf("many\n");
        flag=1;
}
    else{
    for(l;l<=r;l++){
        if(l==t){
            printf("%d\n",t);
            flag=1;
            break;
        }
}
    }
if(flag==0)
    printf("impossible\n");
n--;
}
}
