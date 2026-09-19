#include<iostream>
using namespace std;
int main(){
    auto add =[](int a,int b){
        return a+b;
    };
    cout<<add(3,4)<<endl;
    
    int a=5;
    int b=5;
    auto equal=[=]() mutable{
        a=10;
    };
    equal();
    cout<<a<<endl;
     auto an=[&](){
        a=10;
    };
    an();
    cout<<a<<endl;
return 0;


}
