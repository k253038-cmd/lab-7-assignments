#include<stdio.h>
int main(){
	int arr1[5], arr2[5],merged[10];
	int i;
	
	printf("enter first array\n");
	for(i=0;i<5; i++){
		scanf("%d" , &arr1[i]);
		merged[i]=arr1[i];
	}
	printf("enter a second array\n");
	for(i=0; i<5; i++){
	
	scanf("%d", &arr2[i]);
	merged[i+5]=arr2[i];
}
printf("enter a merged array");
for(i=0; i<10; i++){
	printf("%d", merged[i]);
}
}
