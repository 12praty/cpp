#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int>s;
	s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // 30

    s.pop(); // removes 30
    cout << "Top after pop: " << s.top() << endl; // 20

    cout << "Size: " << s.size() << endl;
    cout << "Is empty: " << (s.empty() ? "yes":"no")<<endl;

    // Print all elements (destructive, since stack has no iterator)
    cout << "Stack elements (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}