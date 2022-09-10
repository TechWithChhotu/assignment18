//Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
void check_str(char str[]);
int main()
{
	char str[100];
	printf("Enter the string: ");
	gets(str);
	check_str(str);

return 0;
}
void check_str(char str[]){
	int i=0,j=strlen(str)-1;
	
	for(i=0;i<(j/2)+1;i++,j--){
		if(str[i]!=str[j]){
		printf("not palindrom string");
		exit(0);
		}
	}
	printf("palindrom string");
}
