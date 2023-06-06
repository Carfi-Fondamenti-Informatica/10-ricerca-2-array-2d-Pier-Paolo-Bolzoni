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
 
void inserimento(char nomi[5][15], char cognomi[5][15]){ 
    for(int i=0; i<5;i++){ 
        inserimento(nomi[i],15); 
        inserimento(cognomi[i],15); 
    } 
}
