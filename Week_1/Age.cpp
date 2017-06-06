/* Giulio Momente' */

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>   
#include <stdexcept>
#include <string>


inline void error(const std::string& s)
{
    throw std::runtime_error(s);
}

void ask_for_the_age(int &age){
	std::cout << "What is your age?" << std::endl;
	std::cin >> age;
	if(!std::cin.good()){
	    error("Invalid input");
	}else{
	  std::cout << age << std::endl;	  
	}
}
	
void print_to_file(int age){
	std::ofstream output;
	output.open("Age_output.txt");
	output << age << std::endl;
	output.close();	
}

int main(){
	
	int age;
	ask_for_the_age(age);
	print_to_file(age);
	
	return 0;
}