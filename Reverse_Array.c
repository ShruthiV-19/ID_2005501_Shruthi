#include<stdio.h>
int main()
{
int arr[50],rev[50],i,j,n;
printf("Enter the number of elements in the array\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

reverse_array(arr,n);
}

void reverse_array(int *arr, int n)
{
int rev[50],i=0,j;
for(j=n-1;j>=0;j--)
{
    rev[j]=arr[i];
}

for(i=0;i<n;i++)
{
   printf("%d\t",rev[i]);
}
}
