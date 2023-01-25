#include <stdio.h>
#include <dirent.h>

struct dirent **namelist; 
int n;  
n=scandir(".",&namelist,NULL,alphasort); 
printf("Number Files %d\n", n); 
        if (n == -1) { 
            perror("scandir"); 
            exit(EXIT_FAILURE); 
        } 
        while (n--) 
        { 
            printf("%s\n",namelist[n]->d_name); 
            free(name[n]); 
        } 

int main(){
	printf("Howdy Partner!");
	return 0;
}
