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
 
 /*I/O functions cout, cin objects*/
 #include <iostream>
 /*sran funciton*/
 #include <cstdlib>
 /* readout and write files */
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
 
 struct productCharacteristic {
 	int weight;
 	double priceEuro;
 	double priceDollar;
 };
 
 
 /* Function in C++*/
 void print1DArray(uint16_t arg[], int length)
 {
 	std::cout << "Print array: " << std::endl;
 	for(int n=0 ; n<length ; n++)
 		std::cout << arg[n] << " ";
 	std::cout << "\n";
 }
 
 void print2DArray(uint16_t arg[], int length)
 {
 	/* Auxiliar variables */
 	int n,m = 0;
 	
 	std::cout << "Print 2D Array: " << std::endl;
 	for(n = 0 ; n<DIMARRAYX ; n++){
 		for(m = 0; m<DIMARRAYY ; m++){
 			std::cout << arg[n*DIMARRAYY+m] << " ";
 				if(m == DIMARRAYY-1)
 					std::cout<< " \n"; 	
 		}
 	}
 }
 
 /* Data structures */
 
 void incrementValue(int *start, int *stop)
 {
 	int *current = start;
 	while(current != stop){
 		++(*current);
		current++; 	
 	}
 }
 
 void printValues(const int *start, const int *stop)
 {
 	const int *current = start;
 	while(current != stop){
 		std::cout<<*current<<'\n';
 		++current;
 	}
 }
 
 

 
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
 	
 	uint16_t arrayMultiDim[DIMARRAYX*DIMARRAYY];
 	
 	/*for(i=0 ; i<DIMARRAYX ; i++){
 		for(j=0 ; j<DIMARRAYY ; j++){
 			arrayMultiDim[i*DIMARRAYY+j] = i*j*2+j;
 			std::cout << " " << arrayMultiDim[i*DIMARRAYY+j]; 
 			if (j == DIMARRAYY-1)
 				std::cout << " \n" << std::endl; 	
 		}
 	} */
 	
 	/* Print funcitons */
 	//print1DArray(arrayMultiDim, DIMARRAYY*DIMARRAYX);
 	//print2DArray(arrayMultiDim, DIMARRAYY*DIMARRAYX);
 	
 	/* Pointers and data structures */
 	
 	int firstValue, secondValue;
 	int *myPnt;
 	
 	myPnt = &firstValue;
 	*myPnt = 10;
 	myPnt = &secondValue;
 	*myPnt = 20;
 	
 	std::cout << "First Value: " << firstValue << " Second Value: " << secondValue << std::endl;
 	
 	/* Pointers and arrays */
 	
 	int numbers[5];
 	int *pnt;
 	
 	pnt = numbers;
 	
 	for(i=0 ; i<5 ; i++)
 		*(pnt+i) = i*2;
 	
 	for(j=0 ; j<5 ; j++)
 		{std::cout<<numbers[j]<<std::endl;}
 		
 	/* Pointer arithmetics */
 	
 	int valuesNumeric[] ={10,20,30,40};
 	//incrementValue(valuesNumeric, valuesNumeric+3);
 	printValues(valuesNumeric, valuesNumeric);
 	
 	j= 0;
 	while (j != 2){
 		cout<<j<<endl; 
 		j++;
 	}
 	
 	
 
 	return 0;
 
 }
