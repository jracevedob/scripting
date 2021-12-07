// Namespace exercises
/*
 * Copyright (C) 2021 - Technische Universität Dresden - Telekom Chair of ComNets
 *
 * This file contains the constructor and destructor declaration, as well
 * some backup execises with containers in C++.
 *
 * Author:  Javier Acevedo
 */
 /**
 * @brief Low-Power Wireless Bus Test Application
 *
 */
 
 /*---------------------------------------------------------------------------*/
 
 #define Sigma 2
 #define DIMARRAYX 10
 #define DIMARRAYY 10
 
 #include <iostream>
 #include <sstream>
 #include <iomanip>
 #include <string>
 #include <limits>
/*---------------------------------------------------------------------------*/
 #ifndef VECTOR
 #include <vector>
 #endif 

 /*---------------------------------------------------------------------------*/
 
 using namespace std;
 
 template<typename T, typename U>
 auto maxValue(T x, U y){
 	return(x>y) ? x : y;
 }
 
 
 /* Function in C++*/

 
 int main(int argc, char** argv)
 {
 
 	std::cout << maxValue<int>(3,7) << std::endl;
 	std::cout << maxValue<double>(3.0,7.0) << std::endl;
 	std::cout << maxValue<char>('g', 'e') << std::endl;
 
    // Lets assume different data type: casting
    std::cout << maxValue(2, 2.5)<< std::endl;
 	// Call function for arithmetic operation
 	
 	// Control variables
 	int i,j = 0;
 	
 	// Unidirectional arrays declaration
 	uint16_t arrayNum[DIMARRAYX];
 	
 	// Multidimentional array declaration
 	
 	uint16_t arrayMultiDim[DIMARRAYX][DIMARRAYY];
 	
 	for(i=0 ; i<DIMARRAYX ; i++){
 		for(j=0 ; j<DIMARRAYY ; j++){
 			arrayMultiDim[i][j] = i*j*2+j;
 			std::cout << " " << arrayMultiDim[i][j]; 
 			if (j == DIMARRAYY-1)
 				std::cout << " \n" << std::endl; 	
 		}
 	}
 	
 	
 	
 
 	return 0;
 
 }
