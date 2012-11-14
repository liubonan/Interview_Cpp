#include <stdio.h>

int main(void){
	char *input;
	char *head;
	char c;

	input = "1234567890";
	head = input;

	while(*input != '\0'){
		input++;
	}

	input--;

	while(input != head){
		printf("%c",*input);
		input--;
	}

	printf("%c",*input);
	
	return 0;

}