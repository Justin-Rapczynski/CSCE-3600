#include "major1.h"


int main(){
int choice;

do{
printf("\n\nEnter the menu option for the operation to perform:\n");
printf("(1) POWER OF 2\n");
printf("(2) REVERSE BITS\n");
printf("(3) REPLACE BIT POSITION FROM MASK\n");
printf("(4) PALINDROME\n");
printf("(5) EXIT\n --> ");

scanf("%d", &choice);

switch(choice){

   case 1: //Powerof2();
    break;
        
        case 2: printf("GROUP MEMBER WITH REVERSE BITS CHANGE THIS SO IT GOES TO YOUR INDIVIDUAL FILE");
        break;
            
            case 3: printf("GROUP MEMBER WITH REPLACE CHANGE THIS SO IT GOES TO YOUR INDIVIDUAL FILE");
            break;
                
                case 4: palindrome();
                break;
                    
                    case 5: exit;
                    break;
    
    default : printf("SORRY THAT NUMBER DOSENT COUNT\n");

}


}while(choice != 5);


return 0;
}