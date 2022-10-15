#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> primes;
  for (int i=3;i<100;i++){
      bool isPrime=true;
      for(int j=2; j<i;j++){
            if(i%j==0){
               isPrime=false;
             }
      }
      if(isPrime){
           primes.push_back(i);
      }
  }
  for( auto c:primes){
       cout<<c<<" ";
  }
  cout<<endl;
}
