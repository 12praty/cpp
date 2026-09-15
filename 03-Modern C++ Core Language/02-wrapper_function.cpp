#include<iostream>
#include<utility>
using namespace std;

void target(int x){
	cout<<x<<endl;
}
// simple Wrapper function — renamed to avoid conflict with template overload below
void wrapperSimple(int x){
	target(x);
}
// perfect wrapper function
template<typename T> 
//"The type of the argument is not fixed. Let C++ figure out the type."
void wrapper(T&& arg){
	//It says:"Receive the argument and allow it to be either an lvalue or an rvalue."
	//T&& can handle both.
	target(std::forward<T>(arg));
	//It basically tells C++:
	//"Pass arg to target() in the same lvalue/rvalue form that it originally had."
	//type is also decided by cpp
}
//another wrapper
void target1(string s) {
    cout << s << endl;
}
template<typename T>
void wrapperS(T&& arg) {
    target1(std::forward<T>(arg));
}

int main(){
	int x=10;
	wrapperSimple(x);
	wrapper(x);
	string name = "Pratyush";

    wrapperS(name);

    return 0;

}