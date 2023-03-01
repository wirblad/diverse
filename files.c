#include <dirent.h>
#include <stdio.h>
#include <errno.h>
#include <sys/stat.h>
#include <string.h>
#include "files.h"
#include "safeinput.h"

void files(){

  int count = 0;
  char path[100] = "";

  GetInput("Enter directory: ", path, sizeof(path));
  
  
  DIR *d;
  struct dirent *dir;
  d = opendir(path);
  if (d) {
    while ((dir = readdir(d)) != NULL) {
      //if(dir->d_type == DT_REG){              //måste kunna kolla om file lr dir,, och ta bort . och .. !!
        printf("%s\n", dir->d_name);
        count++;
      //}
    }
    closedir(d);
  }
  printf("Total nr of files in directory: %d\n", count);
  return(0);

}