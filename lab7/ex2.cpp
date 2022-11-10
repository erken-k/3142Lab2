#include <iostream>
#include <vector>
using namespace std;
class Sample
{
	private:
		int x;
		double y;
	public:
		Sample(){ //Constructor 1
			x=0;
			y=0;
		} 
		Sample(int x){//Constructor 2
			this->x=x;
			y=0;
		} 
		Sample(int x, int y){ //Constructor 3
			this->x=x;
			this->y=(double)y;
		}
		Sample(int x, double y){ //Constructor 4
			this->x=x;
			this->y=y;
		}
		void show(){
			cout<<x<<"   "<<y<<endl;
												        }
};
int main(){
	Sample s1;
	Sample s2(5);
	Sample s3(4,5);
	Sample s4(4,5.2);
	cout<<"Sample created using constructor 1"<<endl;
	s1.show();
	cout<<"Sample created using constructor 2"<<endl;
	s2.show();
	cout<<"Sample created using constructor 3"<<endl;
	s3.show();
	cout<<"Sample created using constructor 4"<<endl;
	s4.show();
}

