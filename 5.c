// Write a function to transform a string into lowercase
#include<stdio.h>
void transform(char str[]);
int main()
{
	char str[100];
	printf("Enter the string: ");
	gets(str);
	
	transform(str);
	printf("after transformation string: %s",str);
return 0;
}
void transform(char str[]){
	int i;
	for(i=0;str[i];i++)
		if(str[i]!=32&&str[i]>='A'&&str[i]<='Z')
			str[i]+=32;
}

