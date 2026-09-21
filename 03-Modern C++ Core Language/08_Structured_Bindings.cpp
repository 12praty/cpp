#include<iostream>
#include <utility>
#include <string>
#include <map>
using namespace std;

int main(){
    // before C++17
    pair<string, int> p = {"Alice", 30};
    cout << p.first << " " << p.second << endl;

    // after C++17 - structured bindings
    auto [name, age] = p;
    cout << name << " " << age << endl;

    // example
      map<string, string> url = {
        {"google", "https://www.google.com"},
        {"github", "https://github.com"},
        {"youtube", "https://www.youtube.com"}
    };
    // old style
    for(auto& pair:url){
    	cout<<pair.first<<"-->"<<pair.second<<endl;
    }
    // new style
    for(auto& [code,LongUrl]:url){
    	cout<<code<<"->"<<LongUrl<<endl;
    }

    return 0;
}
