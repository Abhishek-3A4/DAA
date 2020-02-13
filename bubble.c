#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bubble_sort(int a[],int n)
{
	int i,j;
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
}
}
}

void main()
{
int arr[100],n;
clock_t start,end;
double timer;

printf("Enter the size of the array\n");
scanf("%d",&n);

for(int i=0;i<n;i++)
{
arr[i]=rand()%1000+100;
}
start=clock();
bubble_sort(arr,n);
end=clock();
timer=((double)(end-start)/CLOCKS_PER_SEC);

printf("sorted array elements using bubble sort are:\n");
for(int i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}

printf("\nTime required is %f\n",timer);
}
