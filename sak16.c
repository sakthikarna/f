
#include <stdio.h>  
   
int main() {  
    int counter; 
    printf("Even no between 1 to 100\n");
    for(counter = 1; counter <= 100; counter++)
    {  
        if(counter%2 == 0) { 
            printf("%d ", counter);  
        }  
    }  
    
} 
