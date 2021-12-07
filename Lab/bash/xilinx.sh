#!/bin/bash

echo "Hello World"
echo "Printing text new line"
echo -n "Printing text without new line"
echo -e "\n Removing \t backslash \t characters \n"

# Add two numeric values 
((sum=25+30))
#Print result
echo $sum

: '
This is the multicomment option for bash programming
The following script calculates the square value of one 
integer value
'
((area=5*5))
echo $area

: '
Using While and For Loops
'

valid=true
count=1
while [ $valid ]
do 
echo $count
if [ $count -eq 5 ];
then 
break
fi
((count++))
done

: '
Usage of for loops inside bash
'

for ((counter=10; counter>0; counter --))
do
echo -n "$counter"
done
printf " \n "

: '
Final examples about get user input
'

echo "Enter your name"
read name
echo "Welcome $name to Linux Hint"


n=1
if [ $n -lt 10 ]
then
echo "It is a one digit number"
else
echo "It is a two digit number"
fi

: '
Using case statement for comparison
'

echo "Enter your lucky number"
read n
case $n in 
101)
echo "You won the first price" ;;
501)
echo "You won the second price" ;;
999)
echo "You won the thrid price" ;;
*)
echo "Sorry, try next time" ;;
esac


