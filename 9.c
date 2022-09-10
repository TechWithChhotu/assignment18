/*Write a function to reverse a string word wise. (For example if the given string is 
“Mysirg Education Services” then the resulting string should be “Services Education 
Mysirg” )*/
#include<stdio.h>
void word_reverse(char str[]);
int main()
{
	char str[100];
	printf("Enter the string: ");
	gets(str);
	
	word_reverse(str);

return 0;
}
void word_reverse(char str[]){
	int i,j,temp=strlen(str)-1;
	for(i=strlen(str)-1;i>=0;i--){
		if(str[i]==' '||i==0){		
	 		for(j=i;j<=temp;j++)
			printf("%c",str[j]);
			temp=i;
		}
	}
}
