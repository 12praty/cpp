#include<iostream>
#include <string>
#include <string_view>
#include <format>
#include <vector>
#include <ranges>
#include <concepts>
using namespace std;

// ===============================
// TOPIC 10: string_view
// ===============================

// string_view does NOT own the string.
// It only looks at existing string data.
void printName(string_view name){
	cout<<format("Name: {} \n",name);
}

// ===============================
// TOPIC 11: Concepts
// ===============================

// integral means T must be an integer type.
template<integral T>
T doubleIt(T x){
	return x*2;
}

int main(){
	// ===============================
    // 1. string_view
    // ===============================
	string name="Alice";
	// no copy string 
	printName(name);
	//string literally also work
	printName("Pratyush");


    // ===============================
    // 2. std::format
    // ===============================
	int age=30;
	string message = format("{} is {} years old",name,age);
	cout<<message<<endl;


    // ===============================
    // 3. Ranges + Views
    // ===============================

    vector<int>nums={1,2,3,4,5,6,7,8};
    // Pipeline:
    //
    // nums
    //   ↓
    // filter → keep even numbers
    //   ↓
    // transform → square them
    //
    // Views are lazy: the work happens
    // when we iterate over result.
    auto result = nums
         |views::filter([](int n){
         	return n%2==0;
         })
         |views::transform([](int n){
         	return n*n;
         });
         cout<<"result: ";
         for(auto n : result){
         	cout<<n<<endl;
         }


	return 0;
}