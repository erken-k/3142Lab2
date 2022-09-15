#include <iostream>
int main(){
	std::cout<<"Start of program 2"<<std::endl;
	std::cout << "Input 2 numbers: " << std::endl;
	int v1=0, v2=0;
	std::cin >> v1 >> v2;
	std::cout << "For loop"<<std::endl;
	for (int i=v1; v2>=i; ++i){
		std::cout << i <<" ";
	}
	std::cout<< std::endl;
	std::cout<<"While loop" << std::endl;
	while(v1<=v2){
		std::cout << v1 <<" ";
		v1++;
	}
	std::cout<<std::endl<<"End of program 2"

}	
