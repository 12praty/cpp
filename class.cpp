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
	void deposit(double amount){
		Balance += amount;
	}
	void accountBalance(){
		cout<<Balance<<endl;
	}
};


// destructor
class Logger{
	public:
		Logger(){
			cout<<"Logger Created"<<endl;
		}
		~Logger(){
			cout<<"Logger Destroyed"<<endl;
		}
};

int main(){
	BankAccount B;
	B.accountBalance();
	B.deposit(500);
	B.accountBalance();
	B.deposit(500);
	B.accountBalance();
	cout<<"start"<<endl;
	{
	Logger L;
	cout<<"Using Logger"<<endl;
	}
	cout<<"end"<<endl;
}
