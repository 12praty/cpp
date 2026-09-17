#include<iostream>
#include<vector>

using namespace std;
int main(){
	int rows ,cols;
	cin>>rows>>cols;
	// vector<vector<int>>mat;
	vector<vector<int>>arr(rows,vector<int>(cols,0));
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"your arr"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" " ;
		}
		cout<<endl;
	}

}

