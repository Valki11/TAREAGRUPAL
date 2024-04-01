#include <iostream>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    const char figura = '@';
    int x = 0, y = 0;
    char tecla;

    while (true) {
        system("cls"); // Limpiar la pantalla

        gotoxy(x, y);
        std::cout << figura;

        // Leer la tecla presionada sin esperar por Enter
        if (_kbhit()) {
            tecla = _getch();

            // Borrar la figura actual
            gotoxy(x, y);
            std::cout << " ";

            // Mover la figura según la tecla presionada
            switch (tecla) {
                case 'w':
                    if (y > 0) y--;
                    break;
                case 's':
                    if (y < 24) y++;
                    break;
                case 'a':
                    if (x > 0) x--;
                    break;
                case 'd':
                    if (x < 79) x++;
                    break;
                case 'q':
                    return 0; // Salir del programa si se presiona 'q'
                default:
                    break;
            }
        }

        // Dibujar la figura en la nueva posición
        gotoxy(x, y);
        std::cout << figura;

        Sleep(100); // Esperar un poco para que el movimiento sea visible
    }

    return 0;
}


