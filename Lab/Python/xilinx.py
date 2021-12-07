#!/bin/bash/env python

def  call_function(*fname):
	print("First self made function in Python")
	print(fname[0] + " Xilinx")
	print(fname)

def main():

	print("Lets going to learn Python Functions")
	call_function("")
	call_function("ILoveYou") 
	call_function("ILoveYou", "IwannathisJob") 

if __name__ == '__main__':
	main()



