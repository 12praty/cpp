#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Rule of Five style — YOU manage the raw pointer, so YOU must write all 5 functions
class IntArray {
    int* data;
    int size;
public:
    IntArray(int n) { data = new int[n]; size = n; }
    ~IntArray() { delete[] data; }
    IntArray(const IntArray& other) { /* deep copy, written by hand */ }
    
    // Fixed: return *this
    IntArray& operator=(const IntArray& other) { 
        /* written by hand */ 
        return *this; 
    }

    IntArray(IntArray&& other) noexcept { /* written by hand */ }
    
    // Fixed: return *this
    IntArray& operator=(IntArray&& other) noexcept { 
        /* written by hand */ 
        return *this; 
    }
};

// Rule of Zero style — no raw pointer, so NONE of the 5 need to be written
class IntArrayModern{
	vector<int>data; 
	// vector ALREADY correctly manages its own memory
public:
	// all member variables are initialized before entering the constructor body
	IntArrayModern(int n):data(n){}
		
		// just a constructor, nothing else needed
		 //no destructor, no copy/move constructor/assignment — compiler defaults are already correct!

};
int main(){
	int n=10;
	cout<<n<<endl;
	

	return 0;
}