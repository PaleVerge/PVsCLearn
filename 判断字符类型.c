#include <stdio.h>
#include <ctype.h>
int main(void){
	char ch;
	scanf("%c",&ch);
	if(isalpha(ch)){
		printf("alpha");
	}else if(isdigit(ch)){
		printf("numeric");
	}else{
		printf("other");
	}
	return 0;
}
