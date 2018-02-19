#include <stdio.h>

void main
{
	int i,temp1;
	
	int a[10];
  printf("enter the 10 no");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		
		
			if(a[i]>a[i+1])
			{
				temp1=a[i];
				a[i]=a[i+1];
				a[i+1]=temp1;
			}
			
		
	
	}
	printf("%d",a[i]);
	return 0;
}
