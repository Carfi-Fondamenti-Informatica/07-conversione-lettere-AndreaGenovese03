#include "lib.h"

 bool funzione(char &a){
    if ((a>=65 and a<=90)or(a>=97 and a<=122)) {
        if (a<=90){
            a+=32;
        }else{
            a-=32;
        }
        return true;
    }else{
        return false;
}
}
