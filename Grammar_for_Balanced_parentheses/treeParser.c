#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char string[100];
int i = 0;

int lookahead(char c){
	return string[i] == c;
}

int matchTerminal(char c){
	// int i = 0;
	if (string[i] == c) {
		i++;
 		return 1;
 	} 
 	else {
 	return 0;
 	}

}

int count(){
	return (strlen(string)%2) == 0;
}

int B(void){

	// if(count()){
		if (!lookahead('(')) {
	 	 	return 1;
	 	} 

	 	else {	
			 if (!matchTerminal('(')) 
			 	return 0;
			 if (!B()) 
			 	return 0;
			 if (!matchTerminal(')')) 
			 	return 0;
			 if (!B()) 
			 	return 0;
	 		return 1;
		}
	// } else{
	// 	return 0;
	// }
	
	

}


int main(void){
	
	scanf("%s",&string);
	printf("%s\n",string);

	if(count()){
		printf("Ballanced  ==  %d\n",B());
	} else{
		printf("Ballanced  ==  %d\n",0);
	}

	

}
