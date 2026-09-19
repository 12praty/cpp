#include<iostream>
using namespace std;
int main(){
	int capacity=5;
	int* stack=new int[capacity];
	int top=-1;
	// push with manual resize check
	auto push=[&](int val){
		if(top>=capacity-1){
			cout<<"Resizing Stack......."<<endl;
			int newCapacity=capacity*2;
			int* newStack=new int[newCapacity];
			for(int i=0;i<=top;i++) newStack[i]=stack[i];
				delete[] stack;
			    stack=newStack;
			    capacity=newCapacity;
		}
		stack[++top]=val;
	};
	for(int i=1;i<=6;i++){
		push(i*10);
		 cout << "Pushed: " << i * 10 << endl;
	}
	delete[] stack;
	return 0;
}