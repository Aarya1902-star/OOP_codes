#include<iostream>
using namespace std;
class Class2;
class Class1{
	public:
		int n1,n2,greatest;
		void accept(){
			cout<<"enter two numbers:";
			cin>>n1>>n2;
		}
		void display(){
			cout<<"the greatest of two numbers is:"<<greatest;
		}
	friend void find_greatest(Class1 &c1,Class2 &c2);
};

	class Class2{
		public:
		int n1,n2,greatest;
		void accept(){
			cout<<"enter two numbers:";
			cin>>n1>>n2;
		}
		void display(){
			cout<<"the greatest of two numbers is:"<<greatest;
		}
		friend void find_greatest(Class1 &c1,Class2 &c2);
};
	void find_greatest(Class1 &c1,Class2 &c2){
			if(c1.n1>c1.n2){
				c1.greatest=c1.n1;
			}
			else{
				c1.greatest=c1.n2;
			}
			
			if(c2.n1>c2.n2){
				c2.greatest=c2.n1;
			}
			else{
				c2.greatest=c2.n2;
			}
			}

		int main(){
			Class1 c1;
			Class2 c2;
			
			c1.accept();		
			c2.accept();
			
			find_greatest(c1,c2);
			c1.display();
			c2.display();
			return 0;
		}
