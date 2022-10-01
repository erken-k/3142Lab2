#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){

    short int sx;
    int x; 
    long lx;
    bool z;
    float f;
    double d;
    char c;
    long double ld;
    cout<<"Size of short int is "<<sizeof(sx) <<endl;
    cout<<"Size of int is "<<sizeof(x) <<endl;
    cout<<"Size of long int is "<<sizeof(lx) <<endl;
    cout<<"Size of float is "<<sizeof(f) <<endl;
    cout<<"Size of double is "<<sizeof(d) <<endl;
    cout<<"Size of long double is "<<sizeof(ld)<<endl;
    cout<<"Size of char is "<<sizeof(c) <<endl;
    cout<<"Size of bool is "<<sizeof(z) <<endl;
}
