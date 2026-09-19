#include<iostream>
using namespace std;
#define MAX_SIZE 5

int main(){
	int stack[MAX_SIZE];
	int top=-1;

	// Push operation
	auto push =[&](int val){
		if(top>=MAX_SIZE-1){
			cout<<"stack overflow"<<endl;
			return;
		}
		stack[++top]=val;
	};
	//pop operation
	auto pop=[&](){
		if(top<0){
			cout<<"stack underflow"<<endl;
			return;
		}
		cout<<"popped: "<<stack[top--]<<endl;
	};
	//peek operation
	auto peek=[&](){
		if(top<0){
			cout << "Stack is empty!" << endl;
            return;
		}
		cout<<"top Element: "<<stack[top]<<endl;
	};

	push(10);
	push(20);
	push(30);
	peek();
	pop();
	peek();
	return 0;
}
