#include <iostream>
#include <vector>
using namespace std;
class Rectangle{
    public:
        float width;
       	float length;
	void setWidth(float x){
		width=x;
	}
	void setLength(float x){
		length=x;
	}
	float perimeter(){
		return 2*(width+length);
	}
	float area(){
		return width*length;
	}
	void show(){
		cout<<"The length is: "<<length<<endl;
		cout<<"The width is: "<<width<<endl;
	}
	int sameArea(Rectangle t){
		float a1=width*length;
		float a2=t.width*t.length;
		if(a1==a2)
			return 1;
		return 0;
	}
						        
};
				        
int main()
{
	Rectangle r1;
	r1.setLength(5);
	r1.setWidth(2.5);
	Rectangle r2;
	r2.setLength(5);
	r2.setWidth(18.9);
	cout<<  "   PART 2"<<endl;
	cout<<"Rectangle 1:"<<endl;
	r1.show();
	cout<< "Perimeter is: "<<r1.perimeter()<<endl;
	cout<< "Area is: "<<r1.area()<<endl;
	cout<<"Rectangle 2:"<<endl;
	r2.show();
	cout<< "Perimeter is: "<<r2.perimeter()<<endl;
	cout<< "Area is: "<<r2.area()<<endl;
	cout<<  "   PART 3"<<endl;
	if(r1.sameArea(r2)==1){
		    cout<<"Area is same"<<endl;
	} else{
		    cout<<"Area is different"<<endl;
	}
	r1.setLength(15);
	r1.setWidth(6.3);
	cout<<" After r1 was updated"<<endl;
	if(r1.sameArea(r2)==1){
		    cout<<"Area is same"<<endl;
	} else{
		    cout<<"Area is different"<<endl;
	}
}
