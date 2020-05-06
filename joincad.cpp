#include <iostream>
using namespace std;
void unir_char(char [], char []);

int main(){
    char cad_a[255] = "Esto es una prueba";
    char cad_b[255] = " que concadena dos cadenas char";

    unir_char(cad_a, cad_b);
    return 0;
}

void unir_char(char a[] , char b []){
    int i(0), j(0);
    char cad_aux[255];
    while (a[i])
    {
        if (a[i] != '\0')
        {
            cad_aux[i] = a[i];
        }
        i++;
    }
    while (b[j])
    {
        if (b[j] != '\0')
        {
            cad_aux[i+ j ] = b[j];
        }
        j++;
    }
    cout << cad_aux << endl;
}