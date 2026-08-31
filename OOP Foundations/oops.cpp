#include <iostream>
using namespace std;

// ============================================================
// 1. ENCAPSULATION
// ============================================================

class BankAccount {
private:
    double balance;   // Hidden data

public:
    BankAccount(double amount) {
        balance = amount;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    double getBalance() {
        return balance;
    }
};


// ============================================================
// 2. ABSTRACTION
// ============================================================

// Abstract class
class Vehicle {
public:
    // Pure virtual function
    virtual void start() = 0;
};


// ============================================================
// 3. INHERITANCE
// ============================================================

class Car : public Vehicle {
public:

    // ========================================================
    // 4. POLYMORPHISM
    // ========================================================

    // Overriding the start() function
    void start() override {
        cout << "Car starts with a key." << endl;
    }
};

class Bike : public Vehicle {
public:

    // Different implementation of the same function
    void start() override {
        cout << "Bike starts with a button." << endl;
    }
};


// ============================================================
// MAIN FUNCTION
// ============================================================

int main() {

    // --------------------------------------------------------
    // 1. ENCAPSULATION
    // --------------------------------------------------------

    BankAccount account(1000);

    account.deposit(500);

    cout << "Bank Balance: "
         << account.getBalance()
         << endl;


    // --------------------------------------------------------
    // 2 + 3 + 4. ABSTRACTION + INHERITANCE + POLYMORPHISM
    // --------------------------------------------------------

    Car car;
    Bike bike;

    car.start();
    bike.start();


    // Runtime polymorphism
    Vehicle* vehicle1 = &car;
    Vehicle* vehicle2 = &bike;

    vehicle1->start();
    vehicle2->start();


    return 0;
}