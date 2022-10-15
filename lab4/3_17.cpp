#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){

    vector<string> stringVector;
    string s;
    cout<<"Enter your sequence, enter -1 when done" <<endl;
    cin>>s;
    while(s!="-1"){
           stringVector.push_back(s);
           cin>>s;
    }
    for(string &s : stringVector){
        s[0]=toupper(s[0]);
    }
    for (int i = 0; i != stringVector.size(); i++){
        if (i != 0 && i % 8 == 0){
             cout << endl;
        }
        cout << stringVector[i] << " ";
}
cout<<endl;
}
