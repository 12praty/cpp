#include<iostream>
using namespace std;
struct point{
	int x;
	int y;
};
double distance (point a , point b){
	int dx = a.x - b.x;
	int dy = a.y - b.y;
	int dist = dx - dy; 
	return dist;
}
struct value{
	int x;
	void print(){
		cout<<x<<endl;
	}
};
int main(){
	point p;
		p.x=2;
		p.y=4;
	
	cout << p.x<<endl<<p.y<<endl;

	point a={2,3};
	point b ={4,6};
	cout<<distance(a,b)<<endl;
	value g={5};
	g.print();

}