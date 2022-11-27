#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
vector<string> tokenize(string s, string del = " ")
{
	vector<string> v;
	int start, end = -1*del.size();
	do {
		start = end + del.size();
		end = s.find(del, start);
		v.push_back( s.substr(start, end - start));
	} while (end != -1);
	return v;
}
float calcA(vector<vector<string>> v){
	
	float sum=0;
	for (int i=0;i<9;i++){
		sum+=stoi(v[i][1]);
	}
	return (sum/9);
	

}
float sma(vector<vector<string>> v ,int n){
	float sum=0;
	for( int i=8;i>8-n;i--){
		sum+=stoi(v[i][1]);
	}
	return sum/n;
}
float smaw(vector<vector<string>> v ,int n){
	float sum=0;
	int weight=n;
	int w=0;

	for( int i=8;i>8-n;i--){
		sum+=stoi(v[i][1])*weight;
		w+=weight;
		weight--;
	}
	return sum/w;
}
int main(){
	fstream fout;
	  
	    // opens an existing csv file or creates a new file.
	    fout.open("output.csv", ios::out);

       	fstream fin;     
       	fin.open("./weather.csv", ios::in);
	vector<vector<string>> v;
	string row;
	getline(fin,row);
	for(int i=0;i<9;i++){
		getline(fin,row);
		vector <string> temp;
		temp=tokenize(row,",");
	        v.push_back(temp);
	}
	for (auto i: v){
		for(auto j:i){
		    fout << j << ' ';
		}
		fout<<"\n";
	}
	fout<<"Method A is : "<< calcA(v)<<"\n";
	fout<< "Method B is : "<< sma(v,3)<<"\n";
	fout<<"Method C is : "<< smaw(v,3)<<"\n";
	return 0;
}
