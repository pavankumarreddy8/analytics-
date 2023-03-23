#include<stdio.h>
int main ()
{
	int arr[5] = {2,3,5,6,7};
	int first =arr[0];
	int second =arr[0];
	for (int i = 0; i<5; i++){
		if (first < arr[i]){
			first = arr[i];
		}
	}
	for (int i = 0; i<5; i++){
		if ((second < arr[i])&&(first != arr[i])){
			second = arr[i];
		}
	}
	printf("the first and second largest in the array are %d", first, second);
}
