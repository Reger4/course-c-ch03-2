#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

    int main(void)
    {
    	int num=0;
    	int i=0;
    	int s=0;
    	int v=0;
    
    	while(i<5)
    	{
    		int j=0;
    		while(j<i)
    		{
    			printf("*");
    			j++;
    			num--;
    		}
    		printf("\n");
    		i++;
    	}
    	while(s<5)
    	{
    		int v=0;
    		while(v<5-s)
    		{
    			printf("*");
    			v++;
    			num--;
    		}
    		printf("\n");
    		s++;
    	}
    	return 0;
    }
