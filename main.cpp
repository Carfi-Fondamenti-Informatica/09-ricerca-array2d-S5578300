#include <iostream>
#include "lib.h"
use namespace std;

int main(){
  char Matrice[10][20];
  char Matrice2 [20];
  int pos=0;
  for (int i=0; i<10; i++){
    for (int j=0, j<20; j++){
      Matrice [i][j]='   ';
      Matrice2 [j]='  ';
    }
  }
  for (int i=0; i<10; i++){
    cin >> Array[i];
  }
  cin>> Matrice2;
  if (funzione(Array, Array2,pos)){
    cout << pos;
  }else{
    cout << "non presente";
       }
  return 0;
}
