// Hacer un juego donde tenga el siguiente menu:
// 1- Jugar
// 2- Estadistica
// 0- Salir
// Jugar:
//	El juego consiste en que cada jugador lanzara dados en una cantidad indefinidas de rondas. en cada ronda se lanzan 3 dados (6 caras) y de esos dados se obtendra el puntaje de la ronda
//	Y el puntaje de la ronda es obtenida a partir del numero de dado con mayor valor
//	El puntaje total es la sumatoria de los puntajes obtenidos de cada ronda
//	El juego finaliza cuando alguno de los jugadores llegan a 25
//	El jugador debe poder jugar contra la CPU

// Estadistica:
// Muestra el ganador en la menor cantidad de rondas y las rondas
#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time(), usada para inicializar el generador de números aleatorios

using namespace std;

void jugar(int& ganadorRondasMinimas, int& rondasGanadorMinimo);
int lanzarDados();
void mostrarEstadistica(int ganadorRondasMinimas, int rondasGanadorMinimo);

int main() {

    int opcion;
    int ganadorRondasMinimas = -1;  // Variable para almacenar el ganador que ganó en menos rondas
    int rondasGanadorMinimo = 9999; // Variable para almacenar la cantidad mínima de rondas que tomó ganar

    do {
        cout << endl <<"Menu:" << endl;
        cout << "1 - Jugar" << endl;
        cout << "2 - Estadistica" << endl;
        cout << "0 - Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                jugar(ganadorRondasMinimas, rondasGanadorMinimo);
                break;
            case 2:
                mostrarEstadistica(ganadorRondasMinimas, rondasGanadorMinimo);
                break;
            case 0:
                cout << "Saliendo del juego...\n";
                break;
            default:
                cout << "Opcion invalida, intenta nuevamente.\n";
        }
    } while (opcion != 0);

    return 0;
}

// Función para realizar el juego
void jugar(int& ganadorRondasMinimas, int& rondasGanadorMinimo) {
    int puntajeJugador = 0, puntajeCPU = 0;
    int rondas = 0;

    srand(time(0));  // Inicializar el generador de números aleatorios

    while (puntajeJugador < 25 && puntajeCPU < 25) {
        rondas++;

        cout << endl << "Ronda " << rondas << ":\n";

        // Jugador lanza los dados
        int puntajeRondaJugador = lanzarDados();
        cout << "Tu puntaje de esta ronda: " << puntajeRondaJugador << "\n";
        puntajeJugador += puntajeRondaJugador;

        // CPU lanza los dados
        int puntajeRondaCPU = lanzarDados();
        cout << "Puntaje de la CPU en esta ronda: " << puntajeRondaCPU << "\n";
        puntajeCPU += puntajeRondaCPU;

        cout << "Puntaje total - Jugador: " << puntajeJugador << " | CPU: " << puntajeCPU << "\n\n";
    }

    // Determinar el ganador
    if (puntajeJugador >= 25) {
        cout << "¡Felicidades! Has ganado en " << rondas << " rondas.\n";
        if (rondas < rondasGanadorMinimo) {
            ganadorRondasMinimas = 1;  // 1 representa al jugador
            rondasGanadorMinimo = rondas;
        }
    } else {
        cout << "La CPU ha ganado en " << rondas << " rondas.\n";
        if (rondas < rondasGanadorMinimo) {
            ganadorRondasMinimas = 2;  // 2 representa a la CPU
            rondasGanadorMinimo = rondas;
        }
    }
}

// Función para lanzar 3 dados y devolver el puntaje de la ronda
int lanzarDados() {
    int dado1 = rand() % 6 + 1;  // Generar un número aleatorio entre 1 y 6
    int dado2 = rand() % 6 + 1;
    int dado3 = rand() % 6 + 1;

    cout << "Dados lanzados: " << dado1 << ", " << dado2 << ", " << dado3 << "\n";
    // Retornar el mayor valor de los tres dados
    return max(dado1, max(dado2, dado3));
}

// Función para mostrar las estadísticas del ganador con menor cantidad de rondas
void mostrarEstadistica(int ganadorRondasMinimas, int rondasGanadorMinimo) {
    if (ganadorRondasMinimas == -1) {
        cout << "Aun no hay estadisticas disponibles. ¡Juega una partida primero!" << endl;
    } else {
        if (ganadorRondasMinimas == 1) {
            cout << "El jugador gano en la menor cantidad de rondas: " << rondasGanadorMinimo << endl;
        } else if (ganadorRondasMinimas == 2) {
            cout << "La CPU gano en la menor cantidad de rondas: " << rondasGanadorMinimo << endl;
        }
    }
}
