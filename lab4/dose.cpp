#include <iostream>
#include <string>
using namespace std;
int main()
{
	double miceDose;
        double weightOfMouse;
	double weightOfDieter;
	string repeat="y";
	while(repeat[0]=='y'){
		cout<< "Enter the amount necessary to kill a mouse:  ";
		cin>>miceDose;
		cout<<"Enter the the weight of the mouse:  ";
		cin>>weightOfMouse;
		cout<<"Enter the the weight of the dieter (when he stops dieting):  ";
		cin>>weightOfDieter;
		double sweetenerInCan=350.0/1000;
		const double lethalForHuman=weightOfDieter*miceDose/weightOfMouse;
		cout<<"Lethal number of cans for this person is: "<<lethalForHuman/sweetenerInCan;
		cout<<endl<<"Would you like to repeat these calculations? (y/n): ";
		cin>>repeat;
															        }
	return 0;
}
