#!/bin/bash 
randomNumberGenerated=$(( $RANDOM % 10 + 1 )); 
echo -n "Enter a number between 1 and 10:"
read userinput
while [ $userinput -ne $randomNumberGenerated ]
do
   echo "Sorry, you are not correct. Try again!"
   echo -n "Enter a number between 1 and 10:"
   read userinput
done
echo "Congratulations, the number is $userinput"