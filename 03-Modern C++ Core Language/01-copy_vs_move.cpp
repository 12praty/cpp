// We need an array and if we use a copy constructor or 
// copy function, that means C++ just creates new memory and 
// then copies the entire array to that memory location. 
// Move is like suppose there is information. When the function uses a 
// return function, that means that has to be destroyed at the end. 
// Instead of creating a new sequence function, the sequence function 
// is used here. The difference is that sequence does not create new, 
// only allocates new and just gives ownership to the next. 
// &   → "I want to use your data."
// &&  → "I can take your resources."
// =========================================================
#include<iostream>
#include<utility>
using namespace std;

class IntArray{
private:
	int* data;
	int size;
public:
	IntArray(int n){
		size =n;
		data = new int[size];
		for (int i=0;i<size;i++){
			data[i]=i+1;
		}
	}
	// copy constructer
	IntArray(const IntArray& other){
		cout<<"copy contructer called"<<endl;
		size=other.size;
		data= new int[size];
		for (int i=0;i<size;i++){
			data[i]=other.data[i];
		}

	}
	// move constructer
	IntArray(IntArray&& other){
		cout<<"move constructer called"<<endl;
		size=other.size;
		data=other.data;
		other.data=nullptr;
		other.size=0;
	}
	~IntArray(){
		delete[] data;
		cout<<"Destructor called"<<endl;
 	}

};
int main(){
	IntArray a(5);
	IntArray b=a;
	IntArray c=std::move(a);
	return 0;
}