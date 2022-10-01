#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){

    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    cout<<"Original Vector is: "<<endl;
    for (vector<int>::iterator it = v.begin() ; it != v.end(); ++it)
        cout << *it << "\t" ;
    for (vector<int>::iterator it = v.begin() ; it != v.end(); ++it)
       *it=*it*2;
    cout<<endl;
    cout<<"Doubled Vector is: "<<endl;
    for (vector<int>::iterator it = v.begin() ; it != v.end(); ++it)
           cout << *it << "\t" ;
    cout<<endl;
		    
}
