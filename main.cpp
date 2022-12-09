#include <iostream>
using namespace std;
#include "lib.h"

int main (){
    char a;
    cin >> a;
    if (controlloCovertoCarattere(a)) {
        cout << a;
    }
    else
        cout << "errore";
    return 0;
}

