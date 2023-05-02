#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"

unsigned int fstring_length(fixstring s){
    unsigned int length;
    for(unsigned int i = 0; i < FIXSTRING_MAX; ++i){
        if(s[i] == '\0'){
             length = i;
             break;
        }
    }
    return length;
}

bool fstring_eq(fixstring s1, fixstring s2) {
    bool result = false;
    if(fstring_length(s1) == fstring_length(s2)){
        result = true;
        for(unsigned int i = 0; i < fstring_length(s1); ++i){
            if(s1[i] != s2[i]){
                result = false;
                break;
            }
        }
    }
    return result;
}

bool fstring_less_eq(fixstring s1, fixstring s2) {
    bool result;
    unsigned int index = 0;
    while((index < FIXSTRING_MAX) && (s1[index] == s2[index]) && (s1[index] != '\0') && (s1[index] != '\0')){
        index++;
    }
    if(s1[index] == '\0' || s2[index] == '\0'){
        result = (s1[index] == '\0');
    }
    else{
        (s1[index] < s2[index]) ? (result = true) : (result = false);
    }
    return result;
}

