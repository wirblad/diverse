#include "longestword.h"
#include <stdbool.h>
#include <string.h>

void longestWord(){

    int nrOfWords = 0;
    char LongestWord[100] = "";
    char newWord[100] = "";
    
    while(true){

        GetInput("Enter word: ", newWord, sizeof(newWord));
        
        if(strcmp(newWord,"\n") == 0)
            break; 

        nrOfWords++;
        if(strlen(newWord) > strlen(LongestWord))
            strcpy(LongestWord,newWord);    

    }
    
    printf("The longest of the %d words you entered is: %s\n", nrOfWords, LongestWord);

}