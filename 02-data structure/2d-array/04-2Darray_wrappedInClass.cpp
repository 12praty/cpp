#include<iostream>
using namespace std;

class Matrix2D{
private:
	int** data;
	int rows , cols;
public:
	// constructor
	Matrix2D(int r,int c){
		rows=r;
		cols=c;
		data =new int*[rows];
		for(int i=0;i<rows;i++){
			data[i]=new int[cols];
			for(int j=0;j<cols;j++){
				data[i][j]=0;
			}
		}
	}
	// setter function
	void set(int r,int c,int value){
		if(r>=0 && r<rows && c>=0 && c<cols){
			data[r][c]=value;
		}else{
			cout<<"index out of bound"<<endl;
		}
	}
	// getter function
	int get(int r,int c){
		if(r>=0 && r<rows && c>=0 && c<cols){
			int arr=data[r][c];
			return arr;

		}else{
			cout<<"index out of bound"<<endl;
		}

		return -1;

	}
	// display matrix
	void display(){
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				cout<<data[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	// destructor
	~Matrix2D(){
		for(int i=0;i<rows;i++){
			delete[] data[i];
		}
		delete[] data;
		cout<<"memory of matrix is cleared"<<endl;
	}

};
int main(){
	Matrix2D arr(2,2);
	arr.set(0,0,1);
	arr.set(0,1,2);
	arr.set(1,0,3);
	arr.set(1,1,4);
	arr.display();
	
	cout<<arr.get(0,0);
	cout<<endl;

}