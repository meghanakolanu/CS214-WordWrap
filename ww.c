#include <stdio.h>
#include <stdlib.h>

inline int word_length(const char *str){
    int getIndex = 0;
    while(str[getIndex]! = 0 && str[getIndex] ! = '' && str[getIndex]! = '\n'){
        getIndex++;
    }
    return(getIndex);
}

void word_wrap(char *s, const int linewrap){
    int index = 0;
    

}
