#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "BinarySearchTree.h"

using namespace std;

int main(int argc, char * argv[]){
	if(argc != 2){
		cout << "USAGE ./trees <input-file>" << endl;
		exit(1);
	}
	
	string file(argv[1]);
	ifstream infile(file);	
	string line;
	BinarySearchTree BST;
	while(getline(infile, line)){
		stringstream ss(line);
		int input;
		ss >> input;
		BST.insertNode(input);		
	}
	BST.printContents();
	return EXIT_SUCCESS;
}
