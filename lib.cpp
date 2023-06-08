#include <iostream>
#include "lib.h"
using namespace std;

void init (char mat[], int n){
    for(int i=0;i<n;i++){
        mat[i]= ' ';
    }
}

void init(char mat[5][15]){
    for(int i=0;i<5;i++){
        init(mat[i],15);
    }
}

void inserimento(char a[],int d ){
    for(int i=0;i<d;i++){
        cin >> a[i];
    }
}

void inserimento(char nomi[5][15], char cognomi[5][15]){
    for(int i=0; i<5;i++){
        inserimento(nomi[i],15);
        inserimento(cognomi[i],15);
    }
}

int ricerca(char nomi[5][15], char cognomi[5][15], char nome[15], char cognome[15]) {
    for (int i = 0; i < 5; i++) {
        int j=0;
        for (j = 0; j < 15; j++) {
            if (nomi[i][j] != nome[j]) {
                break;
            }
            if (cognomi[i][j] != cognome[j]) {
                break;
            }
        }
            if (j == 15) {
                return i;
            }
    }
    return -1;
}
