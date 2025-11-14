#include<stdio.h>
int main(){
	char c;
	printf("enter character:");
	scanf("%c",&c);
	
	switch(c){
		case'a':case'A':
		case'e':case'E':
		case'i':case'I':
		case'o':case'O':
		case'u':case'U':
			printf("it is a vowel\n",c);
			break;
			default:
			printf("it is not\n",c);
			break;
	}
	return 0;
}
