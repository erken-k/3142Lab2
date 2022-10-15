#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
int main(){
	ifstream inFile;
	inFile.open("./pp3.txt");
	if (!inFile) {
		cerr << "Unable to open file datafile.txt";
		exit(1);   // call system to stop
	}
	double x,y;
	vector<double> X;
	vector<double> Y;
	while (inFile>>y>>x){
		X.push_back(x);
		Y.push_back(y);
	}
	double ySum=0, xSum=0;
	double yAverage, xAverage;
	for(double temX: X){
		xSum+=temX;
	}
	for(double temY: Y){
		ySum+=temY;
	}
	yAverage=ySum/Y.size();
	xAverage=xSum/X.size();
	double sumSquarredErorX=0;

	for (double x: X){
		sumSquarredErorX+=(x-xAverage)*(x-xAverage);
	}
	double product=0;
	for(int i=0;i<X.size();i++){
		product+=(X[i]-xAverage)*(Y[i]-yAverage);
	}
	double b1=product/sumSquarredErorX;
	double b0=yAverage-b1*xAverage;
	cout<<"Simple linear regression model for this data is: "<<b0<<"+"<<b1<<*"x"<<endl;

}
