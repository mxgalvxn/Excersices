#include <iostream> 
#include <math.h> 
using namespace std;

int main() {


    string palabra = "fdsdhfg jfhg";
    int size1 = palabra.length();
    bool palindromo = true;
    for (int i = 0; i< size1-1; i++ ){
        if (palabra[0+i] != palabra[size1-i-1]){
            palindromo = false;
        }
    }

    cout<<palindromo;
}