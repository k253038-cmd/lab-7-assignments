#include<stdio.h>
int main(){
	int n,i;
	int arr[100];
	printf("enter a number do you store");
	scanf("%d",&n);
	
	printf("enter %d number  \n", n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
		
	}
	printf("the reverse array is");
	for(i=n-1; i>=0; i--){
		printf("%d", arr[i]);
	}
}

