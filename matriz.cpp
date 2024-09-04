#include <iostream>

using namespace std;

// int main(int argc, char** argv) {
// 	int matriz[4][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11},{12,13,14,15}};
	
// 	for(int i = 0; i < 4; i++){
// 		for(int j = 0; j < 4; j++){
// 			cout<<matriz[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

// Manipulação de Matrizes: Transposição. A transposição de uma matriz consiste em trocar linhas por colunas.

void transporMatriz(int matriz[3][3], int linhas, int colunas) {
    int transposta[colunas][linhas];
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }
    // Imprimir a matriz transposta
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transporMatriz(matriz, 3, 3);
    return 0;
}