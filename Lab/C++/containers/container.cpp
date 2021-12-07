// Containers, constructors and destructores exercises
/*
 * Copyright (C) 2021 - Javier Acevedo - TUD ComNets
 *
 * This file contains the constructor and destructor declaration, as well
 * some backup execises with containers in C++.
 *
 */


#ifndef VECTOR
#include <vector>
#endif

#include <iostream>
#include <fstream>
#include <memory>

using namespace std;
/* Namespace explanation 
 * Allows to create multiple variables or functions
 * with the same name in different scopes.
 */
 
 
/* Heap
 *
 *
 * Stack
 */
class myClass{



};

namespace gr{
	// Code declarations
	void func(){
		std::cout << "Inside first namespace named gr" << std::endl;
	}
	namespace tutorial{
		void func(){
			std::cout << "Inside second namesapce named tutorial" << std::endl;
		}
	
	}

}

// Functions in C++, Arrays, Strings, Operators


int oepration_arithmetic(int x, int y, int *ptr){

	*ptr = 30;

	if(x>y)
		return x;
	else
		return y;

}

std::string ReadFileAsString(const std::string& filepath){

	std::ifstream stream(filepath);
	
	if(stream){
		std::string result;
		//Read file
		stream.close();
		return result;
	} else {
		return 0;
	}
	// Read the file
}

using namespace gr::tutorial;
int main(int argc, char** argv){

    /*First test about the number of arguments*/
    std:cout << "Have " <<argc<< " arguments!" <<std::endl;
    for(int j=0; j<argc ; j++){
    	std::cout << argv[j] << std::endl;
    }
    
    
    //This call function from namespace tutorial
    func();
    
    //Read file
    ofstream myFile;
    myFile.open("example.txt");
    myFile << "Writing this to a file \n";
    //ifstream myFile;
    //std::cout << " " << myFile;
    myFile.close();
    
    ifstream myFileout;
    myFileout.open("exmaple.txt");
    std::cout << "The content of the file is: %s" << myFileout << std::endl; 
        
    /**/

	int* p = nullptr;
	int i = 5;
	p = &i;
	
	std::cout<<"Print the value of p: "<<*p<<std::endl;
	
	return 0;

}

