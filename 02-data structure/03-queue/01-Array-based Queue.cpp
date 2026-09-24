#include <iostream>
using namespace std;
class ArrayQueue {
  int* arr;
  int frontIdx, rearIdx, size, capacity;

 public:
  ArrayQueue(int cap) {
    capacity = cap;
    arr = new int[capacity];
    frontIdx = 0;
    rearIdx = -1;
    size = 0;
  }
  ~ArrayQueue() { delete[] arr; }

  bool isFull() { return size == capacity; }
  bool isEmpty() { return size == 0; }

  void enqueue(int val) {
    if (isFull()) {
      cout << "Queue Overflow\n";
      return;
    }
    rearIdx = (rearIdx + 1) % capacity;  // circular warp
    arr[rearIdx] = val;
    size++;
  }

  void dequeue() {
    if (isEmpty()) {
      cout << "Queue Underflow\n";
      return;
    }
    cout << "dequeue: " << arr[frontIdx] << endl;
    frontIdx = (frontIdx + 1) % capacity;
    size--;
  }

  int front() {
    if (isEmpty()) {
      cout << "Queue Underflow\n";
      return -1;
    }
    return arr[frontIdx];
  }
};

int main(){
  ArrayQueue q(5);
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  q.dequeue();
  cout<<q.front()<<endl;


}
 // circular warp
// rearIdx = 0
// (0 + 1) % 5 = 1

// rearIdx = 1
// (1 + 1) % 5 = 2

// rearIdx = 2
// (2 + 1) % 5 = 3

// rearIdx = 3
// (3 + 1) % 5 = 4

// rearIdx = 4
// (4 + 1) % 5 = 0   ← WRAPS AROUND