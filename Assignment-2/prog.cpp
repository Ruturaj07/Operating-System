#include <iostream> 
#include <fstream> 
using namespace std; 

int main() 
{ 
	ofstream fout; 
	string line; 
	ifstream fin; 
	

	fin.open("ip.txt");  
	fout.open("op.txt");

	while (fin) {

		getline(fin, line); 

		if(fin) 
			fout << line << endl; 
	} 
	fin.close(); 
	fout.close();

	return 0; 
} 
