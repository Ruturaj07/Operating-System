#include <iostream> 
#include <fstream> 
using namespace std; 

int main() 
{ 
	ifstream fout; 
	string line;
	ofstream fin; 
	

	fin.open("ip.txt",ios::app);

	fout.open("ip1.txt");

	while (fout) {

		getline(fout, line); 

		if(fout) 
			fin << line << endl; 
	} 
	fin.close(); 
	fout.close();

	return 0; 
} 
