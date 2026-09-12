#include <stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		printf("%d",arr[i]);
	}

	const int n=5;
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
