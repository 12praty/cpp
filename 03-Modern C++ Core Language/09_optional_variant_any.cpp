#include<iostream>
#include<optional>
using namespace std;

optional<int> getNumber(bool found){
	if(found){
		return 10;
	}
	return nullopt;
}

int main(){

	optional<int> result = getNumber(true);
	if(result.has_value()){
		cout<<result.value();
	}else{
		cout<<"not found";
	}
	return 0;
}
