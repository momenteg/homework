/* Giulio Momente' */

#include "Quiz.h"


int main(int argc, char ** argv) {
	std::string filename;
	bool result = process_command_line(argc, argv, filename);
	if (!result){
		std::cout << "An input name is required, please check the help" << std::endl;
		return 1;
	}
	
	print_row_with_header(filename);

	return 0;
}