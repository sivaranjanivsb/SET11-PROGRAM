#include <stdio.h>

int main(void) {
	int no;
	scanf("%d",&no);
	while(no%2==0)
	{
		no=no/2;
		printf("%d \n",no);
	}
	return 0;
}
