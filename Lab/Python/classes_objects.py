#!/usr/bin/env python

class Person:
	def __init__(self, name, age):
		self.name = name
		self.age = age
		
	def myFunc(self):
		print("My name is: " + self.name)

def main():
	p1 = Person("Javier",20)
	p1.myFunc()
	#print(p1.name, p1.age)

if __name__ == '__main__':
	main()
