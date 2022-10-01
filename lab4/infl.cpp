#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
   double inp;
   int years;
   double infl;
   cout<<"Input initial price: "<<endl;
   cin>>inp;
   cout<<"Input number of years: "<<endl;
   cin>>years;
   cout<<"Input inflation rate: "<<endl;
   cin>>infl;
   infl=infl/100;
   for(int i=1; i<=years;i++){
        inp=inp+inp*infl;
   }
   cout<<"Price after inflation is: " <<inp<<endl;
}
