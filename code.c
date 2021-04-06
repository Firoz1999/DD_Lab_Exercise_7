#include<stdio.h>
int main()
{
	int *ptr=(int *)0xffffffffc03d6000;
	printf("value at above virtual address in kernel space = %d\n",*ptr);
	return 0;
}
