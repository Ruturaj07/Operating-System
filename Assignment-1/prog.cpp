#include <iostream> 
#include <fstream> 
using namespace std; 

int main() 
{ 
	ofstream fout,fout1; 
	string line; 
	ifstream fin,fin1; 
	

	fin.open("ip.txt"); 
	fin1.open("ip1.txt"); 
	fout.open("op.txt");

	while (fin) {

		getline(fin, line); 

		if(fin) 
			fout << line << endl; 
	} 
	fin.close(); 

	while (fin1) { 
 
		getline(fin1, line); 

		if(fin1)
			fout << line << endl; 
	}  
	
	fin1.close();
	fout.close();

	return 0; 
} 
