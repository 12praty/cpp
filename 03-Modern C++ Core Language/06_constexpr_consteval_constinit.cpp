// in cpp it computation happen in runtime but if we want that computation in compile time we use this
// constexpr — "can run at compile time, if possible; otherwise falls back to runtime."
// consteval — "must run at compile time, always, no exceptions."
// constinit — a narrower guarantee: "this variable's initialization must happen at compile time"

#include<iostream>
using namespace std;


constexpr int square(int x) {return x*x;}
constexpr int square1(int x) {return x*x;}
constinit int globalCounter = 0;   // guaranteed to be initialized at compile time, no runtime init cost
int main(){
	//constexpr
	
	constexpr int a1 = square(5);//compute at compile time 
	int n1;
	cin>>n1;
	int b1 =square(n1);//compute at run time till that we dont know

	//consteval
	
	constexpr int a = square1(5);//compute at compile time 
	int n;
	cin>>n;
	// int b =square1(n);//error  — n isn't known at compile time, but consteval REQUIRES it

	//constinit
	
    globalCounter++;                    // fine — constinit doesn't mean "never changes," just "starts this way"
  return 0;

}