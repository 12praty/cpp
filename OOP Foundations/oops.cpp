#include <iostream>
using namespace std;


// ============================================================
//                    OOP IN C++
// ============================================================
//
// OOP = Object-Oriented Programming
//
// The 4 main pillars of OOP:
//
// 1. Encapsulation
// 2. Abstraction
// 3. Inheritance
// 4. Polymorphism
//
// Polymorphism has two common forms:
//
// - Compile-time Polymorphism → Function Overloading
// - Runtime Polymorphism   → Function Overriding + virtual
//
// ============================================================


// ============================================================
// 1. ENCAPSULATION
// ============================================================
//
// Definition:
// Encapsulation means wrapping data and functions together
// inside a class and controlling access to the data.
//
// In simple words:
// "Protect the data from direct access."
//
// We usually use private, public, and protected.
//
// ============================================================

class BankAccount {

private:

    // Private data cannot be directly accessed from outside
    // the class.
    int balance;


public:

    // Constructor
    BankAccount(int amount) {
        balance = amount;
    }


    // Function to modify the private data
    void deposit(int amount) {
        balance += amount;
    }


    // Getter function
    // Used to read the private data
    int getBalance() {
        return balance;
    }
};


// ============================================================
// 2. ABSTRACTION
// ============================================================
//
// Definition:
// Abstraction means hiding implementation details and
// showing only the necessary functionality.
//
// In simple words:
// "You know WHAT to do, but you don't need to know HOW
// it is done."
//
// Example:
// You call car.start()
// You don't need to know how the engine internally starts.
//
// ============================================================

class Vehicle {

public:

    // Pure virtual function
    //
    // Every Vehicle must have a start() function,
    // but Vehicle does not tell HOW it should work.
    virtual void start() = 0;
};


// ============================================================
// 3. INHERITANCE
// ============================================================
//
// Definition:
// Inheritance means creating a new class from an existing
// class.
//
// The new class can use accessible members of the parent class.
//
// In simple words:
// "Child class gets/reuses features from parent class."
//
// Vehicle
//    ↑
//    |
//   Car
//
// ============================================================

class Car : public Vehicle {

public:

    // ========================================================
    // 4. RUNTIME POLYMORPHISM
    // ========================================================
    //
    // Definition:
    // Polymorphism means "one interface, different behavior."
    //
    // Here Car provides its own implementation of start().
    //
    // Vehicle says:
    //     "Every vehicle must have start()."
    //
    // Car says:
    //     "My start() works like this."
    //
    // ========================================================

    void start() override {
        cout << "Car starts using key" << endl;
    }
};


class Bike : public Vehicle {

public:

    // Bike provides a different implementation
    // of the same start() function.

    void start() override {
        cout << "Bike starts using button" << endl;
    }
};


// ============================================================
// 5. FUNCTION OVERLOADING
// ============================================================
//
// Definition:
// Function overloading means having the SAME function name
// with DIFFERENT parameters.
//
// It is a form of compile-time polymorphism.
//
// Example:
//
// add(int, int)
// add(int, int, int)
// add(double, double)
//
// C++ decides which function to call based on the arguments.
//
// ============================================================

class Calculator {

public:

    // Function 1
    int add(int a, int b) {
        return a + b;
    }


    // Function 2
    // Same name, but 3 parameters
    int add(int a, int b, int c) {
        return a + b + c;
    }


    // Function 3
    // Same name, but different parameter types
    double add(double a, double b) {
        return a + b;
    }
};


// ============================================================
//                         MAIN
// ============================================================

int main() {


    // ========================================================
    // ENCAPSULATION
    // ========================================================

    BankAccount account(1000);

    account.deposit(500);

    cout << "Balance: "
         << account.getBalance()
         << endl;


    // We CANNOT do this:
    //
    // account.balance = 5000;
    //
    // because balance is private.


    cout << endl;


    // ========================================================
    // INHERITANCE
    // ========================================================

    Car car;
    Bike bike;

    // Car and Bike inherited from Vehicle.

    car.start();
    bike.start();


    cout << endl;


    // ========================================================
    // RUNTIME POLYMORPHISM
    // ========================================================
    //
    // Both pointers are Vehicle pointers.
    //
    // But they point to different objects.
    //
    // Vehicle* → Car
    // Vehicle* → Bike
    //
    // Because start() is virtual, C++ calls the correct
    // version at runtime.
    //
    // ========================================================

    Vehicle* vehicle1 = &car;
    Vehicle* vehicle2 = &bike;

    vehicle1->start();   // Car's start()
    vehicle2->start();   // Bike's start()


    cout << endl;


    // ========================================================
    // FUNCTION OVERLOADING
    // ========================================================

    Calculator calc;


    // Calls:
    // add(int, int)
    cout << calc.add(10, 20) << endl;


    // Calls:
    // add(int, int, int)
    cout << calc.add(10, 20, 30) << endl;


    // Calls:
    // add(double, double)
    cout << calc.add(10.5, 20.5) << endl;


    return 0;
}
