#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
    int i,j,sayi;
    
    printf("sayi girin : ");
    scanf("%d",&sayi);
    
    for(i=0;i<sayi;i++)
    {
    	if(i==sayi-1 || i==1 || i==0)
		{
			for(j=0;j<=i;j++)
			{
				printf("*");
			}
		}
        else
        {
        	for(j=0;j<=i;j++)
        	{
        		if(j==i || j==0)
        		{
        			printf("*");
				}
			    else
			    {
			    	printf(" ");
				}
			}
		}
	printf("\n");
	}

	return 0;
}
