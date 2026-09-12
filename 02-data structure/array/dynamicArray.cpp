#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	int *arr=new int[5];
	for (int i=0;i<n;i++){
		cin>>arr[i];

	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	delete[] arr;
	return 0;

}