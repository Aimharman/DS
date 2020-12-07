#include<stdio.h>
#include<stdlib.h>
#include"/home/ankesh/strtoi.h"
int main()
	{
		//int *stringtoint();
		int *intarr, z=0, i=0;
		printf("\nplease enter no of elements to be converted: ");
		scanf("%d", &z);
		int value[z];
		intarr = stringtoint(z);
		printf("\n\n>>>>Returned control to main!\n>>>>Returned address value: %x\n\n", &(*intarr));
		LABEL: if(z<0)
		goto EXIT; 
		--z;
		i++;
		printf("Value: %d\nManipulated address value: %x\n", *(intarr + z) , &(*(intarr + z)));
		value[z] = *(intarr + z);
		goto LABEL;
				
		EXIT:printf("\n\nInteger Array: ");
				for(z=0;z<(i-1);z++)
					{
						printf("%d, ", value[z]);
					}
		printf("end!\n\n");		
		
	return 0;
}
