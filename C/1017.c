#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int dist, tempo, velmed;
    float gas;

    scanf("%d", &tempo);
    scanf("%d", &velmed);
    
	dist = tempo * velmed;
	
	//cast
	gas = (float)dist/ 12;
	
	printf("%.3f\n", gas);
    	
	return 0;
}
