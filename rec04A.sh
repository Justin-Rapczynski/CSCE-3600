#!/bin/bash
if [ $# -ne 1 ]
then
echo " Hope you have a great day! "
else
name=$1 #name storing the the command line argument value
echo "Good day, "$name" ! Nice to meet you!"
fi