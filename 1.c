// Write a function to calculate length of the string
#include<stdio.h>
int string(char str[]);
int main()
{
	char str[100],length;
	printf("Enter the string: ");
	gets(str);
	
	length=string(str);
	printf("string length is %d",length);
return 0;
}
int string(char str[]){
	int i;
	for(i=0;str[i];i++);
	return i;
}
