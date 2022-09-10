//Write a function to compare two strings.
#include<stdio.h>
void str_cmp(char str_1st[],char str_2nd[]);
int main()
{
	char str_first[100],str_second[100];
	printf("Enter the first string: ");
	gets(str_first);
	printf("Enter the second string: ");
	gets(str_second);
	
	str_cmp(str_first,str_second);
return 0;
}
void str_cmp(char str_1st[],char str_2nd[]){
	int i;
	for(i=0;str_1st[i]||str_2nd[i];i++){
		if(str_1st[i]!=str_2nd[i]){
			printf("string are not equal");
			exit(0);
		}
	}
	printf("string are equal");
}

