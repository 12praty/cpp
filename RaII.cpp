#include <iostream>
using namespace std;
class intarray{
	int* data;
public:
	intarray(int size){
		data= new int[size];
		cout<<" data allocated"<<endl ;

	}
	~intarray(){
		delete[] data;
		cout<<"data freeed"<<endl;
	}
};
void doWork(){
      intarray arr(1000);
      intarray arr2(1000);

      bool fail=false;
      if(fail){
        return;
      }
      
}
int main(){
	doWork();
}
