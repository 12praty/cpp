#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";

	}
	cout<<endl;
	cout<<"Using Range Base in Element: ";
	for(int i:v){
		cout<<i<<" ";
	}
	cout<<endl;

	cout<<"Using auto: ";
	for(auto i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"size: "<<v.size()<<endl;
	cout<<"vector Front: "<<v.front()<<" ,vector Back: "<<v.back()<<endl;
	cout<<"inilize size and and value: ";
	vector<int>v2(5,100);
	for(int i:v2){
		cout<<i<<" ";
	}
	cout<<endl;


}

