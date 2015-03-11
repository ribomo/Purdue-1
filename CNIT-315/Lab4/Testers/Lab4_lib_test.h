//Lib for testers.
#include <string.h>

int checkSubstring(){
text = "abd";
if(*subString(text,3,1) != ""){
return 1;
}
else if(*subString(text,-5,-3) != ""){
return 1;
}
else if(*subString(text,1,4) != ""){
return 1;
}
else if(*subString(text,-2,1) != ""){
return 1;
}
else if(*subString(text,0,1) != "ab"){
return 1;
}
text = "0123456789"
else if(*subString(text,3,4) != "34"){
return 1;
}

return 0;
}

int checkRemoveWord(){
text = "abcdefg";
RemoveWord(text,"bcdef");
if(strcmp(text,"ag") != 0){
return 1;
}
}
