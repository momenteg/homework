/*
 author: Giulio Momente'         
 email: momenteg@gmail.com
 date: June 2017
 */

#include "Quiz.h"

int main(int argc, char ** argv) {
	std::string file_name;
	bool result = process_command_line(argc, argv, file_name);
	if (file_name.empty()){
		std::cout << "No filename entered, check the help for details" << std::endl;
		return 0;
	}else{
		print_row_with_header(file_name);
	}
	
	return 0;
	
}