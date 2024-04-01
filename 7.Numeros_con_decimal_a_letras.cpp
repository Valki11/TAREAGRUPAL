#include <iostream>
#include <string>
using namespace std;

// Función para convertir la parte entera de un número a letras
string convertirEnteroALetras(int num) {
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};

    string letras;

    if (num >= 100) {
        letras += unidades[num / 100] + "cientos ";
        num %= 100;
    }

    if (num >= 20) {
        letras += decenas[num / 10] + " ";
        num %= 10;
    } else if (num >= 10) {
        letras += especiales[num - 10] + " ";
        num = 0;
    }

    if (num > 0) {
        letras += unidades[num] + " ";
    }

    return letras;
}

// Función para convertir la parte decimal de un número a letras
string convertirDecimalALetras(int num) {
    // Escribir la parte decimal como un número entero
    return convertirEnteroALetras(num);
}

// Función para convertir un número con parte decimal a letras
string convertirNumeroALetras(double numero) {
    // Separar la parte entera y la parte decimal
    int parteEntera = static_cast<int>(numero);
    int parteDecimal = static_cast<int>((numero - parteEntera) * 100);

    // Convertir la parte entera y la parte decimal a letras
    string letrasParteEntera = convertirEnteroALetras(parteEntera);
    string letrasParteDecimal = convertirDecimalALetras(parteDecimal);

    // Concatenar las partes entera y decimal
    string letras = letrasParteEntera + " punto " + letrasParteDecimal;

    return letras;
}

int main() {
    double numero;
    cout << "Ingrese un número con parte decimal: ";
    cin >> numero;

    // Convertir el número a letras y mostrarlo
    string letras = convertirNumeroALetras(numero);
    cout << "El número " << numero << " en letras es: " << letras << endl;

    return 0;
}
