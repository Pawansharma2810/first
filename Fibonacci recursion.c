#include<stdio.h>
int fibonacci(int num){
if(num==0||num==1)
{return num;
}
int next=fibonacci(num-2)+fibonacci(num-1);
return next; 
}
int main()
{
int num;
scanf("%d",&num);
for(int i=0;i<=num;i++)
{
int ans=fibonacci(i);
printf("%d",ans);
}

}