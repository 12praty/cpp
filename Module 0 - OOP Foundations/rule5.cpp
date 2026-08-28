#include <iostream>
#include<utility>
using namespace std;
class IntArray{
	int* data;
	int size;
public:
	// constructor
	IntArray(int n){
		size n;
		data=new int[size]
		for(int i=0;i<size;i++){
			data[i]=i;
		}
		 cout << "[Constructor] size=" << size << " at " << data << endl;
	}
	// Destructor
	~IntArray(){
		cout << "[Destructor] freeing " << data << endl;
		delete[] data;
	}


	// copy constructor
	//called when new object is created from existing one
	// IntArray b=a or IntArray b(a)
	IntArray(const IntArray& other){
		size=other.size;
		data=new int[size];
		for(int i=0;i<size;i++){
			data[i]=other.size[i]
		}
		 cout << "[Copy Constructor] deep-copied to NEW address " << data << endl;
	}

	//COPY ASSIGNMENT OPERATOR
    //Called when an ALREADY-EXISTING object is overwritten by another:
    //b = a;    (b already exists, has its own old memory)
    IntArray& operator=(const IntArray& other){
    	cout << "[Copy Assignment] called" << endl;

    	// check for a=b
    	if(this== &other){
    		cout << "(self-assignment, doing nothing)" << endl;
            return *this;
    	}
    	delete[] data;
    	size = other.size;

        // Create NEW memory
        data = new int[size];

        // Copy values
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }

        cout << "freed old memory, deep-copied to NEW address "
             << data << endl;

        return *this;

    }
    

};