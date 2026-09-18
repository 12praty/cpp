#include<iostream>
#include<vector>
using namespace std;
auto getName(){
	return "pratyush";
}
int main(){
	auto x=5;
	auto y=5.0;
	cout<<x<<y<<endl;
	vector<int>nums={1,2,3};
	for(auto n: nums){
		n=n*2;
	}
	cout<<nums[0]<<endl;
	cout<<nums[1]<<endl;
	cout<<nums[2]<<endl;
	cout<<endl;
	for(auto& n: nums){
		n=n*2;
	}
	cout<<nums[0]<<endl;
	cout<<nums[1]<<endl;
	cout<<nums[2]<<endl;

	auto a = getName();
	cout<<a<<endl;
	// auto& b = getName();//it gets destroyed
const auto& b = getName();// const reference can bind to the temporary returned by getName()
cout<<b;
}