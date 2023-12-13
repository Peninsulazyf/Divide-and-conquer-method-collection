#include <stdio.h>

int max(int list[],int l,int r)
{
	int mid,max1,max2;
	mid=(l+r)/2;
	if(l==r)	return (list[l]);
	else if(l+1==r)	return(list[l]>list[r]?list[l]:list[r]);
	else
	{
		max1=max(list,l,mid);
		max2=max(list,mid,r);
		return (max1>max2?max1:max2);
	}
}

int main()
{
	int num;
	printf("Please enter an integer number:");
	scanf("%d",&num);
	int list[num];
	for(int i=0;i<num;i++)
	{
		int temp;
		printf("Please enter the %dth number:",i+1);
		scanf("%d",&temp);
		list[i]=temp;	
	}
	num=max(list,0,num-1); 
	printf("The largest number is: %d",num);
	return 0;	
} 
