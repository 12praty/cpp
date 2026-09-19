#include<iostream>
using namespace std;
class Stack{
private:
	int* data;
	int capacity;
	int top;
public:
	// condtructor
	Stack(int cap){
		capacity=cap;
		data=new int[capacity];
		top=-1;
	}
	// push
	void push(int val){
		if(isFull()){
			cout<<"stack overflow"<<endl;
			return;
		}
		data[++top]=val;
	}
	// pop
	int pop(){
		if(isEmpty()){
			cout<<"stack overflow"<<endl;
			return -1;
		}
		return data[top--];
	}
	// peek
	int peek(){
		if(isEmpty()){
			cout << "Stack is empty!" << endl;
            return -1;
		}
		return data[top];
	}

	int isEmpty(){
		return top==-1;
	}
	bool isFull(){
		return top==capacity-1;
	}
	int size(){
		return top + 1;
	}
	~Stack(){
		delete[] data;
        cout << "Stack memory freed!" << endl;
	}

};
int main(){
	  Stack s(5);

    s.push(100);
    s.push(200);
    s.push(300);

    cout << "Top: " << s.peek() << endl;   // 300
    cout << "Popped: " << s.pop() << endl; // 300
    cout << "Top now: " << s.peek() << endl; // 200
    cout << "Size: " << s.size() << endl;

    return 0;
}