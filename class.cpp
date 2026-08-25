#include<iostream>
using namespace std;
class BankAccount{
	double Balance;
public:
	//constructor
	BankAccount() {
    Balance = 0;
	}
	BankAccount (double startingBalance){
		Balance=startingBalance;
	}
	void deposite(double amount){
		Balance += amount;
	}
	void accountBalance(){
		cout<<Balance<<endl;
	}
};

int main(){
	BankAccount B;
	B.accountBalance();
	B.deposite(500);
	B.accountBalance();
	B.deposite(500);
	B.accountBalance();
}