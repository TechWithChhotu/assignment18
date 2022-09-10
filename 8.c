// Write a function to count words in a given string
#include<stdio.h>
void word_count(char str[]);
int main()
{
	char str[100];
	printf("Enter the string: ");
	gets(str);
	
	word_count(str);

return 0;
}
void word_count(char str[]){
	int i,count=0;
	for(i=0;str[i];i++){
		if(str[i]==32&&str[i+1]!=32||i==strlen(str)-1)
		count++;
	}
	printf("total number of word is %d",count);
}
