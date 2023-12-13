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
	printf("请输入整数个数：");
	scanf("%d",&num);
	int list[num];
	for(int i=0;i<num;i++)
	{
		int temp;
		printf("请输入第%d个数:",i+1);
		scanf("%d",&temp);
		list[i]=temp;	
	}
	num=max(list,0,num-1); 
	printf("最大的数为:%d",num);
	return 0;	
} 
