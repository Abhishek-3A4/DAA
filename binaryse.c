#include<stdio.h>
#include<stdlib.h>
int check(int arr[],int n,int k)
{
int high=n-1,low=0,mid;
while(low<=high)
{
mid=(low+high)/2;

if(arr[mid]==k)
return 1;

else if(arr[mid]>k)
high=mid-1;

else
low=mid+1;
}

return -1;
}

void main()
{
int arr[100],n,k,t,j,i;
int res[20];

printf("enter the number of test cases:");
scanf("%d",&t);

for(i=0;i<t;i++)
{

	printf("enter the size of the array\n");
	scanf("%d",&n);
	printf("enter the  elements to be searched\n");
	scanf("%d",&k);

	printf("enter the array elements:");
	for(j=0;j<n;j++){
	
	scanf("%d",&arr[j]);
	
	}
	
	res[i]=check(arr,n,k);
}
for(i=0;i<t;i++)
printf("%d",res[i]);
}












