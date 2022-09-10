/* Write a function to check whether a given string is an alphanumeric string or not. 
(Alphanumeric string must contain at least one alphabet and one digit)
*/
#include<stdio.h>
void check_str(char str[]);
int main()
{
	char string[100];
	printf("Enter the string: ");
	gets(string);
	check_str(string);

return 0;
}
void check_str(char str[]){
	int alpha=0,di=0,i;
	for(i=0;str[i];i++){
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
		alpha++;
		else if(str[i]>='0'&&str[i]<='9')
		di++;
	}
	if(alpha>=1&&di>=1)
	printf("string is an alphanumeric string");
	else
	printf("string is not an alphanumeric string");
}

