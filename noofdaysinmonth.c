  #include<stdio.h>
  int main()
  {
  	
  	int days;
  	printf("number of days");
  	scanf("%d",&days);
  	
  	
  	if(days==31)
{
	printf("january || march||may||july||aug||oct||dec ");
	  }  	
  	else if(days==30)
  	 { 
  	 
  	 printf("april || june||sep||nov");
	   }
  	else if (days==28)
  	{
  		printf("february");
  		
	  }
  	else
  	{
  		printf("no days");
	  }
  	return 0;
  }