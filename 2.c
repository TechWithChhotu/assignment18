//Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
void str_rev(char str[]);
int main()
{
	char str[100];
	printf("Enter your string: ");
	gets(str);
	
	str_rev(str);

return 0;
}
void str_rev(char str[]){
	strrev(str);//second way, use loop and swaping
	printf("after reverse your string: %s",str);
}

