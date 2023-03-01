#include <stdio.h>
#include <stdbool.h>
#include "menu.h"
#include "circle.h"
#include "files.h"
#include "longestword.h"


void main(){

    while(true){
    
    
        int menuSelection = showmenu();
        //printf("\nTEST AV VAL: %d", menuSelection);
        
        if(menuSelection == 1)
            circle();
        else if(menuSelection == 2)
            files();
        else if(menuSelection == 3)
            longestWord();
        else if(menuSelection == 4)
            break;


        

    }
    


}