#include <iostream>
using namespace std;

class MyArray {
private:
    int* data;
    int size;

public:
    // Constructor
    MyArray(int n) {
        size = n;
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = 0; // default initialize
        }
    }

    // Set value at index
    void set(int index, int value) {
        if (index >= 0 && index < size) {
            data[index] = value;
        } else {
            cout << "Index out of bounds!" << endl;
        }
    }

    // Get value at index
    int get(int index) {
        if (index >= 0 && index < size) {
            return data[index];
        }
        cout << "Index out of bounds!" << endl;
        return -1;
    }

    // Display all elements
    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    // Destructor - IMPORTANT to free memory
    ~MyArray() {
        delete[] data;
        cout << "Memory freed!" << endl;
    }
};

int main() {
    MyArray myArr(5);

    myArr.set(0, 100);
    myArr.set(1, 200);
    myArr.set(2, 300);

    myArr.display();
    cout << "Element at index 1: " << myArr.get(1) << endl;

    return 0;
} // destructor called automatically here