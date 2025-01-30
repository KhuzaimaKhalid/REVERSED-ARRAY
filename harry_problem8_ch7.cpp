#include<stdio.h>

void reversearray(int arr[] , int n);

int main()
{
	printf("\t REVERSED ARRAY \n");
	int num;
	printf("\nEnter no of elements: ");
	scanf("%d", &num);
	int arr[num];
	for(int i = 0; i < num; i++){
		printf("\nEnter no %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	reversearray(arr,num);
	printf("Reversed Array = \n");
	for(int j = 0; j < num; j++){
		printf("%d \n",arr[j]);

	}
		printf("\n");
	
	return 0;
}
void reversearray(int arr[] , int n){
	int start = 0, end = n-1;
	while(start < end){
		int temp = 0;
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] =temp;
			start++;
	end--;
	
	}
	
}
