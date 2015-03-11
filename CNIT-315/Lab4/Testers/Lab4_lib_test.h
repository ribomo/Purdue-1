//Lib for testers.
#include <string.h>

//For test
char* subString(char*,int,int);
void RemoveWord(char*,char*);

int checkSubstring(){
	char text[200] = "abd";
	if(strcmp(subString(text,3,1),"") != 0){
		return 1;
	}
	else if(strcmp(subString(text,-5,-3),"") != 0){
		return 1;
	}
	else if(strcmp(subString(text,1,4),"") != 0){
		return 1;
	}
	else if(strcmp(subString(text,-2,1),"") != 0){
		return 1;
	}
	else if(strcmp(subString(text,0,1),"ab") != 0){
		return 1;
	}
	strcpy(text,"0123456789");
	if(strcmp(subString(text,3,4),"34") != 0){
		return 1;
	}

return 0;
}

int checkRemoveWord(){
	char text[200] = "abcdefg";
	RemoveWord(text,"bcdef");
	if(strcmp(text,"ag") != 0){
		return 1;
	}
}
