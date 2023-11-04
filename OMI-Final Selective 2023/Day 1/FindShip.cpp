#include "FindShip.h"

// Main
// int Conocer(int x, int y)

void Encontrar(int N, int M, int X) {
    int verticalInferior = 0,

    verticalSuperior = N - 1,

    horizontalInferior = 0,

    horizontalSuperior = M - 1;

    while (verticalInferior < verticalSuperior && horizontalInferior < horizontalSuperior) {
        int A = Conocer(verticalInferior, horizontalSuperior);
        if (A == X){
            return;
        }
        if (A < X){
            verticalInferior++;
        } 
        if (A > X){
        horizontalSuperior--;
        } 
    }
    
    return;
}