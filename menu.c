#include "safeinput.h"

int showmenu(){
    
    int menuSelection;
    GetInputInt("1. Calculate diameter\n2. List all files in folder\n3. Get longest word\n4. QUIT\n", &menuSelection);
    return menuSelection;

}