//Write a function to find the repeated character in a given string.
#include<stdio.h>
void find_rep_char(char str[]);
int main()
{
	char str[100];
	printf("Enter the string: ");
	gets(str);
	
	find_rep_char(str);

return 0;
}
void find_rep_char(char str[]){
	
	int i,j,k,count;
	printf("\nrepeted character: \n");
	for(i=0;str[i];i++){
		count=0;
		for(j=i+1;str[j];j++){
			if(str[i]==str[j]){
				for(k=j;str[k];k++){
					str[k]=str[k+1];
				}
				j--;
				count++;
			}		
		}
		if(count>=1)
		printf("%c\n",str[i]);
	}
}
