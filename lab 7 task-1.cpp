#include<stdio.h>
int main(){
	int n,i;
	int sum=0;
	int arr[100];
	
	printf("enter a number do you store ");
	scanf("%d", &n);
	
	printf("enter a %d number \n",n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
		sum=sum+arr[i];
	}
	printf("the sum of array is %d",sum);
}
