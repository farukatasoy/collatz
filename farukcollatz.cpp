#include <iostream>
#include <unistd.h>

int main(int argc, char** argv) {

 
    int x = 0;
    int pid,drm;
 
    printf("Bir say� giriniz :  \n");
    scanf("%d", &x);
 
       if(x< 0)
    {
    printf("S�f�rdan b�y�k bir de�er giriniz. \n");
      scanf("%d", &x);
    }
 
    pid = fork();
 
    if(pid < 0)
    {
      printf(" Child olu�turulamad�. \n");
      exit(-1);
    }
 
    else if(pid == 0)
    {
             do
        {
        if(x%2 != 0)
        x= (x*3)+1;
                
         
        else if(x%2 == 0)
        x= x/2;
        
 
        printf("%d \n",x);
        }
		
		
		while(x!= 1);
    }
 
    else
    {
 
        printf("pid %d \n",pid);
    	printf("Child  olu�turuldu. \n");
      			wait(&drm);
      }     
     
     
return 0;   
}
