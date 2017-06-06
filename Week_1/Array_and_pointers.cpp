/* Giulio Momente' */

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <memory>

int main(){
	
	std::unique_ptr<char[]> p(new char(1)); //pointer to a character
	int array_int[10] = {0,1,2,3,4,5,6,7,8,9}; //int array
	std::unique_ptr<int> p1(new int(10));//pointer to array_int
	std::unique_ptr<char[]> p2(new char(100));
	*p2 = "FBYC";	//pointer to an array of character string
	//pointer to a pointer to a character
	const int pi=3.14;
	std::unique_ptr<int> pi_pointer(new int);
	*pi_pointer = 3.14;
	const std::unique_ptr<int> pi_pointer_bis(new int); 	
	
	return 0;
}