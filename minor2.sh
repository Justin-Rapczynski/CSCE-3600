#!/bin/bash
#Owner: Justin Rapczynski
#EUID: Jar0574 Email: justinrapczynski@my.unt.edu
#version: 1.00.02
#Class: CSCE3600
#Description: This code will look through the CSE Linux servers and find what users are on it and how many processes are running in total and per user
trap 'control' 2

control() #this checks for cntrl c and makes sure you want to exit the program
{
read -r -p " (SIGINT) received
  Terminate Program? (Y/N) " response
case "$response" in
    ([yY])
       echo "Terminating program" 
       exit
                ;;
    *)
        echo "Continuing Execution"
        ;;
esac
}
while true; do
if [ "$#" == 0 ] #checks if names were entered when running program, if not it checks all if there are names it checks processes for only those names
    then
    
dt=$(date '+%a %d %b %Y %T %p %Z'); #day of week, day of month, month, year, time, am or pm, time zone
echo "$dt" #prints date
echo "User ID                  Count" #print titles
ps -eo user=|sort|uniq -c  | awk  ' {printf "%-25s %3s\n", $2,  $1   }  ' # find user data and print user name and amount of processes
random=$(ps -eo user=|sort|uniq | wc -l)
tp=$( ps aux --no-heading | wc -l)  # find the amount of total processes

echo  " $random USERS, TOTAL PROCESSES    $tp" #print out amount of users and total processes



else
choice=1
dt=$(date '+%a %d %b %Y %T %p %Z'); #day of week, day of month, month, year, time, am or pm, time zone
echo "$dt"#prints date
echo "User ID                  Count"

for var in "$@"
    do
        i=$((i+1)) #counter to see total users, im sure theres a fancier way but this way was simple and got the job done
        ps -u $var  o user= | sort | uniq -c | sort | awk  ' {printf "%-25s %3s\n", $2,  $1   }  ' # find user data and print user name and amount of processes
       tp=$( ps -u $var  | wc -l)
       j=$((j+$tp))
done
#random=$(ps -u $var o user=|sort|uniq | wc -l)


echo " $i  USERS, TOTAL PROCESSES    $j" #prints out total users and total processes
fi


sleep 5 # runs the program every 5 seconds
done