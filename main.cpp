#include <iostream>
#include <lib.h>
using namespace std;

int main (){
    char a;
    cout << "Inserisci un carattere: ";
    cin >> a;
    if (controlloCovertoCarattere(a)) {
        cout << a;
    }
    else
        cout << "errore";
    return 0;
}

