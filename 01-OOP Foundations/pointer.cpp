#include <iostream>
using namespace std;
class BankAccount{
	int balance;
	public:
		BankAccount(){
			balance=0;
		}
		//this pointer
		BankAccount(int balance){
			this->balance=balance;
		}
		void deposit(int amount){
			balance+=amount;
		}
		void accountBalance(){
			cout<<balance<<endl;
		}
};
int main(){
	BankAccount B;
	B.deposit(500);
	B.accountBalance();

}
