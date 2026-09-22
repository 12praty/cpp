#include<iostream>
#include<optional>
#include<variant>
#include<any>

using namespace std;

optional<int> getNumber(bool found){
	if(found){
		return 10;
	}
	return nullopt;
}

int main(){
	// optional means "a value may or may not exist."
	optional<int> result = getNumber(true);
	if(result.has_value()){
		cout<<result.value();
	}else{
		cout<<"not found";
	}
	cout<<endl;
	//Varient means:Holds one of the predefined types (int or string).
	variant<int,string> v=10;
	cout<<get<int>(v)<<endl;
	v="hello";
	cout<<get<string>(v)<<endl;
    
  



	return 0;
}
