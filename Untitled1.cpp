/*length of string without stlen*/
#include<stdio.h>
int main()
{
	int length=0;
	char str[]="Devendra Charan";
	while(str[length] !='\0'){
		length++;
	}
	printf("length of string is %d\n",length);
	return 0;
}
