#include<iostream>
using namespace std;
int main(){
	int rows;
	int col;
	cout<<"Enter rows and columns: ";
	cin>>rows>>col;
	// allocate the memory
	int** arr = new int* [rows];
	// allocate memory for each rows
	for(int i=0;i<rows;i++){
		arr[i]=new int[col];
	}
	cout<<"Enter the values"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"your array"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	// first delete memory row by row
	for(int i=0;i<rows;i++){
		delete[] arr[i];

	}
	delete[] arr;
}