#include <iostream>
#include <utility>
using namespace std;

class IntArray {
    int* data;
    int size;

public:
    // ============================================================
    // 1. CONSTRUCTOR
    // ============================================================
    IntArray(int n) {
        size = n;
        data = new int[size];

        for (int i = 0; i < size; i++)
            data[i] = i;

        cout << "[Constructor] size=" << size
             << " at " << data << endl;
    }

    // ============================================================
    // 2. DESTRUCTOR
    // ============================================================
    ~IntArray() {
        cout << "[Destructor] freeing " << data << endl;
        delete[] data;
    }

    // ============================================================
    // 3. COPY CONSTRUCTOR
    // ============================================================
    IntArray(const IntArray& other) {
        size = other.size;
        data = new int[size];

        for (int i = 0; i < size; i++)
            data[i] = other.data[i];

        cout << "[Copy Constructor] deep-copied to NEW address "
             << data << endl;
    }

    // ============================================================
    // 4. COPY ASSIGNMENT OPERATOR
    // ============================================================
    IntArray& operator=(const IntArray& other) {
        cout << "[Copy Assignment] called" << endl;

        if (this == &other) {
            cout << "  (self-assignment, doing nothing)" << endl;
            return *this;
        }

        delete[] data;

        size = other.size;
        data = new int[size];

        for (int i = 0; i < size; i++)
            data[i] = other.data[i];

        cout << "  freed old memory, deep-copied to NEW address "
             << data << endl;

        return *this;
    }

    // ============================================================
    // 5. MOVE CONSTRUCTOR
    // ============================================================
    IntArray(IntArray&& other) noexcept {
        data = other.data;
        size = other.size;

        other.data = nullptr;
        other.size = 0;

        cout << "[Move Constructor] stole pointer "
             << data << ", source is now empty" << endl;
    }

    // ============================================================
    // 6. MOVE ASSIGNMENT OPERATOR
    // ============================================================
    IntArray& operator=(IntArray&& other) noexcept {
        cout << "[Move Assignment] called" << endl;

        if (this == &other) {
            cout << "  (self-move, doing nothing)" << endl;
            return *this;
        }

        delete[] data;

        data = other.data;
        size = other.size;

        other.data = nullptr;
        other.size = 0;

        cout << "  freed old memory, stole pointer "
             << data << endl;

        return *this;
    }

    // ============================================================
    // PRINT
    // ============================================================
    void print() {
        if (data == nullptr) {
            cout << "  (empty - was moved from)" << endl;
            return;
        }

        cout << "  [" << data[0] << ", "
             << data[1] << ", "
             << data[2] << "]" << endl;
    }
};

int main() {
    cout << "=== Constructor ===\n";
    IntArray a(3);
    a.print();

    cout << "\n=== Copy Constructor (new object 'b' from 'a') ===\n";
    IntArray b = a;
    b.print();

    cout << "\n=== Copy Assignment ('c' already exists, overwritten by 'a') ===\n";
    IntArray c(3);
    c = a;
    c.print();

    cout << "\n=== Move Constructor (new object 'd' STEALS from 'a') ===\n";
    IntArray d = std::move(a);
    d.print();

    cout << "a after being moved from:\n";
    a.print();

    cout << "\n=== Move Assignment ('c' already exists, STEALS from 'b') ===\n";
    c = std::move(b);
    c.print();

    cout << "b after being moved from:\n";
    b.print();

    cout << "\n=== End of main, watch the destructors ===\n";

    return 0;
}