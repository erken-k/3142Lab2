#include <iostream>


using namespace std;

int main()
{
  cout<<"Input your number: ";
  string input;
  int sum=0;
  cin>>input;
  for (auto c:input){
	  sum+=c-48;
  }
  cout<<"Sum of digits in " <<input << " is: " << sum;
  cout<<endl;
}
