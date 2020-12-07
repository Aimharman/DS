#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/*int main()
	{
		int *stringtoint();
		int *intarr, z=0;
		intarr = stringtoint();
		do
			{
				printf("Value: %d\nReturned address value: %x\n", *(intarr+z) , &(*(intarr+z)));
				z++;
			}while(z<10);
	return 0;
}*/
int *stringtoint(int size)
	{
		char a[size*7];
		printf("\nEnter integer elements to add, separated by coma and not more than 6 digits per number:\n");
		printf(">>>>");
		scanf("%s", a);
		printf("\nString is: %s \n", a);
		int i = 0, count = 0, k =10, temp = 100;
		int *pointer, *b;
		b = malloc(sizeof(int) * size);
		for(i;i<(size*7);i++)
			{
				if(a[i] == ',' || a[i] == '.')
					{	count++;
						i++;			}
				if(temp == count)
					{	b[count] = b[count] * k + (-48 +  (int) a[i]);			}
				else
					{	b[count] = (-48+(int)a[i]);
						temp = count;
						k = 10;		}
				if(a[i] == '.')
				break;
			}
		printf("\nPointer array in heap: ");	
		for(i=0;i<count;i++)
			{	printf("%d,",b[i]);	}
			
		printf("end!\n");
		pointer = &b[0];
		printf("\nAddress in function stack: %x\n",pointer);
		return pointer;
	}
