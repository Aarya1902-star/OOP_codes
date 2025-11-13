#include<iostream>
using namespace std;
class Class1{
	public:
		int x,y,q;
		void accept(){
			cout<<"enter x and y:";
			cin>>x>>y;
		}
		void display(){
			cout<<"after swap,x:\n"<<x;
			cout<<"after swap,y:\n"<<y;
		}
		void swap(Class1 &c1){
	c1.q=c1.x;
	c1.x=c1.y;
	c1.y=c1.q;
}};


int main(){
	Class1 c1;
	c1.accept();
	cout<<"before swapping\n";
	c1.display();
	cout<<"after swapping:\n";
	c1.swap(c1);
	c1.display();
	return 0;
}
