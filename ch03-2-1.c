#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

    int main(void)
    {
    	int num=0;
    
    	while(num < 10){
    		printf("%*s",num," ");
    		printf("%d/n",num);
    		num++;

    	}
    	return 0;
    }
