#Justin Rapczynski EUID: Jar0574
BEGIN {printf  "\nStudent Average Test Scores\nName           	Average\n"}  ;
{ FS = "," } 
NR<=1 { next }
{if($3 == "A") 
{  printf  "%-15s %6.1f\n", $2" " $1, ($4 + $5 + $6)/3, sum += ($4 + $5 + $6), total += 3}
}
END {print total/3 " Students with average score of " sum/total "\n"}