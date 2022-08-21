#include<stdio.h>
int main()
{
	 //0 1 2 3 4 5....n
	 
	 int n, a=0,b=1,c,i;
	 printf("enter a number....");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 
	 {
	 	printf("%d\n",a);
	 	c=a+b;
	 	a=b;
	 	b=c;
	 	
	 }
	 
	 
	 return 0;
	 
	 
	 
	 
	 
	 
	 }
