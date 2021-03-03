#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define byte unsigned char

int main (int argc, char * argv[], char ** envp){

int offset = 0x30;
int number;
int digit;
byte ascii_value; 
int retval;
    read(STDIN_FILENO, &ascii_value, 1);
    while (retval == 1){
             digit =  ascii_value - offset;
             number = (number << 1) + digit; 
             retval = read(STDIN_FILENO, &ascii_value, 1);
             if(ascii_value=='\n'){
                 retval=0;
             }
             
         
     }   
    printf("%u\n", number);
    return 0;
    

 }
 

 
