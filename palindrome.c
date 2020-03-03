#include "major1.h"


int palindrome(){

    unsigned int n;
    unsigned int bin[32] ;
    unsigned int rev[32];
    int numbin;
    int revbin;
    unsigned int reverse_num = 0, temp; 
    int k = 0;

    printf("Enter a positive integer less than 2 billion: ");
    scanf("%d", &n);

    for (int z = 0; z < 32; z++) 
    { 
        temp = (n & (1 << z)); 
        if(temp) 
            reverse_num |= (1 << ((32 - 1) - z)); 
    } 



    for(int i = 31 ; i >= 0 ; i--)
    {
        numbin = n >> i;
        revbin = reverse_num >> i;
        
        if(numbin & 1){
            bin[i] = 1;
        }
            else{  
                bin[i] = 0;
            }

             if(revbin & 1){
                    rev[i] = 1;
                }
                    else{  
                        rev[i] = 0;
                    }
    
    }

    for (int j = 31 ; j>=0; j--){
      printf("%d", bin[j]);
    }
    printf("\n");

    for (int f = 31 ; f>=0; f--){
      printf("%d", rev[f]);
    }
    printf("\n");

   
    while(k < 1){
    for (int m = 0; m < 31; m++) {
        if (bin[m] != rev[m]) {
            printf("IS NOT A PALINDROME");
            return 0;
                 
        }
         
            }
    k=1;
    printf("IS A PALINDROME");
    }




//return 0;
}