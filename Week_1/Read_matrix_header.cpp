/* Giulio Momente' */

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdexcept>

inline void error(const std::string& s){
	throw std::runtime_error(s);
}

void print_row_with_header(std::string filename){
	std::ifstream infile;
	std::string line;
	infile.open(filename.c_str());
	if(infile.good()){
		while (std::getline( infile, line )){
			if(line.find_first_of("%")==-1){
				std::cout << line << std::endl;
				return;
			}
		}
	}else{
		error("Error while opening the file");
	}
}

int main(){
	std::string filename = "MarketMatrix.txt";
	print_row_with_header(filename);

	return 0;
}