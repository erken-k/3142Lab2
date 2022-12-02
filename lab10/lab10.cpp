
#include <iostream>
#include <numeric>
#include <fstream>
#include <functional>
#include <string>
#include <algorithm> 
#include <vector>
#include <tuple>
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

struct Movie{
     int year;
      int length;
      string title;
     string subject;
      string actor;
     string actress;
      string director;
      int popularity;
      bool awards;
      string img;
      };
 bool compare(Movie i1, Movie i2)
	      {
		                        return (i1.popularity < i2.popularity);
					      }
int main(){

 // opens an existing csv file or creates a new file.
        fstream fout;
	fout.open("output.csv", ios::out);
	fstream fin; 
	fin.open("./input.csv", ios::in);
	string row;
	getline(fin,row);
	getline(fin,row);
	int c=0;
	vector<Movie> allMovies;
 	while(getline(fin,row)&& c<200){
	//	c++;
 		vector <string> temp;
		temp=tokenize(row,";");
		Movie tempm;
		if(temp[0]!=""){
			tempm.year=stoi(temp[0]);
		}else{
			
			tempm.year=0;
		}
       		if(temp[1]!=""){
			tempm.length=stoi(temp[1]);
		}else{
			tempm.length=0;
		}
		tempm.title=temp[2];
		tempm.subject=temp[3];
		tempm.actor=temp[4];
		tempm.actress=temp[5];
		tempm.director=temp[6];
		if(temp[7]!=""){
			tempm.popularity=stoi(temp[7]);
		} else{
			tempm.popularity=0;
		}
		tempm.awards=(temp[8]=="No");
		tempm.img=temp[9];
		allMovies.push_back(tempm);
		

	}
	vector<int> len;
	for(auto c: allMovies){
		len.push_back(c.length);
	}

	int sumall=accumulate(len.begin(),len.end(),0);
	fout<<"Accumulated length of all movies is: "<< sumall<<endl;
	vector<int> pop;
	for(auto c: allMovies){
		pop.push_back(c.popularity);
	}
	vector<int>::iterator it=find(pop.begin(),pop.end(),66);
	if(it!=pop.end()){
        fout<< "The first movie in the list with rating=66 is: "<< allMovies[it-pop.begin()].title<<endl;
	}else{
		fout<<"No Movies with length 66:"<< endl;
	
	}
	
	sort(allMovies.begin(),allMovies.end(),compare);
	for(auto c: allMovies){
		fout<<c.title<<+" "<<c.popularity<<endl;
	}
	return 0;

}

