#include<stdio.h>
int main()
{
	int i,c=0;
	char s[50],ch;
	printf("enter the main string ");
	scanf("%s",s);
	printf("enter the sub string");
	scanf("%C",&ch);
	for(i=0;s[i]!='\0';i++){
    
		if(s[i]==ch)
		c++;
	}
	printf("occurrence of  %c in %s is %d times ",ch,s,c);
	return 0;
}
