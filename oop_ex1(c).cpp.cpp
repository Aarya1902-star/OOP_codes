#include<iostream>
using namespace std;
class time{
	public:
		int hours,mins,secs;
		void display(){
			cout<<"hours:"<<hours<<endl;
			cout<<"mins:"<<mins<<endl;
			cout<<"seconds:"<<secs<<endl;	
		}
		int totaltime(){
		return hours*3600+mins*60+secs;
		}
};
int main(){
	time t1;
	t1.hours=1;
	t1.mins=30;
	t1.secs=30;
	t1.display();
	cout<<"total time in seconds is:"<<t1.totaltime()<<endl;
	return 0;
}
