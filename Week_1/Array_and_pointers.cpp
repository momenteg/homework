/* Giulio Momente' */

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <memory>

int main(){
	
	std::unique_ptr<char> p(new char(1)); //pointer to a character
	int array_int[10] = {0,1,2,3,4,5,6,7,8,9}; //int array
	std::unique_ptr<int> p1(new int(10))//pointer to array_int
	char* p2[] = {"FBYC", "Sfortuna", "Verme", "GazeboPenguins"};	//pointer to an array of character string
	//pointer to a pointer to a character
	const int pi=3.14;
	//pointer to an integer costant
	//cost pointer to an integer
	
	
	
	
	return 0;
}