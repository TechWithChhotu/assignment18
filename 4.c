// Write a function to transform string into uppercase
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
		if(str[i]!=32&&str[i]>='a'&&str[i]<='z')
			str[i]-=32;
}

