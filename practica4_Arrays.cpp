// Inicio de sesion
#include <iostream>
#include <cstdlib>
#include <string>
// #include <windows.h>

using namespace std;

int main()
{
    // Variables para el inicio de sesion
    string usuario = "", pasword = "";
    int intentos = 1, totalUsuarios = 10;
    bool acceso = false; // Variable para controlar el acceso

    // Arreglos de usuarios y contraseñas
    string users[] = {"Javo", "Maria", "Pedro", "Carmen", "Limon", "Lola", "Paco", "Ana", "Luis", "Sofia"};
    string passwords[] = {"12qwerty34", "password123", "abc123", "qwerty", "letmein", "123456", "admin", "welcome", "monkey", "dragon"};

    do
    {
        // Solicitar usuario y contraseña

        cout << "Usuario:" << endl;
        cin >> usuario;
        cout << "Contraseña:" << endl;
        cin >> pasword;

        // Verificar las credenciales
        for (int i = 0; i < totalUsuarios; i++)
        {
            if (usuario == users[i] && pasword == passwords[i])
            { // Si las credenciales coinciden, otorgar acceso
                acceso = true;
                break;
            }
        }

        // Verificar las credenciales
        if (acceso)
        {
            // Salto al menu principal
            system("clear"); // Limpia la consola
            system("cls");
            cout << "===================================" << endl;
            cout << "\tBIENVENDIO " << usuario << endl;
            cout << "===================================" << endl;
            cout << "Precine Enter para continuar..." << endl;
            cin.ignore(); // Limpiar el buffer de entrada
            cin.get();    // Esperar a que el usuario presione enter para continuar

            return 0; // Salir del programa
        }
        else
        {
            cout << "Usuario o contraseña incorrectos. Intento" << intentos << " de 3; Precione enter para regresar..." << endl; // Mensaje de error con el número de intento
            intentos++;                                                                                                          // Aumentar el contador de intentos
            cin.ignore();                                                                                                        // Limpiar el buffer de entrada
            cin.get();
            system("clear"); // Limpia la consola
            system("cls");   // Esperar a que el usuario presione enter para continuar
        }

    } while (intentos <= 3);

    if (intentos > 3) // Verificar si se han agotado los intentos
    {
        cout << "Has agotado tus intentos. Acceso denegado, precione Enter para salir." << endl;
    }
    cin.get(); // Esperar a que el usuario presione enter para continuar

    return 0;
}