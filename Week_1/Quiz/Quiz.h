#ifndef QUIZ
#define QUIZ

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <boost/program_options.hpp>

namespace po = boost::program_options;

bool process_command_line(int argc, char **argv, std::string &file_name){
	try{
		po::options_description desc("Program Usage", 1024, 512);
		desc.add_options()
		("help,h",       "produce help message")
		("file_name,f",   po::value<std::string>(&file_name)->required(),     " enter the file to read");
		po::variables_map vm;
		po::store(po::parse_command_line(argc, argv, desc), vm);
		if (vm.count("help")){
			std::cout << desc << "\n";
			return false;
		}
		po::notify(vm);
		return true;
	}
	catch(std::exception& e){
		std::cerr << "Error: " << e.what() << "\n";
		return false;
	}
	catch(...){
		std::cerr << "Unknown error!" << "\n";
		return false;
	}
}


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


#endif

