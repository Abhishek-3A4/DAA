#include<stdio.h>
int search(int arr[],int n,int size)
{
	int mid=0,ini=0,fi=size-1,mide=0,count=-1,snc=size ;
	while(size>0)
	{
		size= fi-ini+1 ;
		mid= mid+size/2 ;
		mide= arr[mid] ;
		
		if(n==mide)
		{
			count=1 ;
			break ;
		}
		if(n<mide)
		{
			ini=0 ;
			fi=mid ;
		}
		if(n>mide)
		{
			ini=mid ;
			fi=snc-1 ;
		}
		size= fi-ini+1 ;
	}
	return count ;
}

int main()
{
	int n,size,num,element ;
	printf("enter the number of test cases\n") ;
	scanf("%d",&n) ;
	for(int i=0;i<n;i++)
	{
		printf("enter size of array\n") ;
		scanf("%d",&size) ;
		printf("enter the number to be searched\n") ;
		scanf("%d",&num) ;
		int arr[size] ;
		for(int j=0;j<size;j++)
		{
			scanf("%d",&element) ;
			arr[j]=element ;
		}
		printf("%d",search( arr, num, size)) ;
	}
}