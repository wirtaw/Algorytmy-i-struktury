/*
Tomas Chmelevski. Student 
* -----------------
* Include files.
* -----------------
2022-12-13
*/

#include <stdio.h>
#include <errno.h>

#include "Sortowanie bobelkowa.h"
#include "Sortowanie swap.h"
#include "Sortowanie scalenie.h"
#include "Sortowanie prior.h"
#include "Sortowanie wstawianie.h"
#include "Sortowanie wymian.h"



int main(void) {
  int tabl[] = {5, 2, 5, 4, 8, 7, 5, 6, 9, 5, 2, 1, 4, 6, 5, 4, 8, 5, 3, 6, 9};
    int ilosc = sizeof(tabl) / sizeof(tabl[0]);
  int i;
  
  for (i = 0; i < ilosc; i++) {
    printf("%d", tab[i]);
  }
  mergeSort(tabl, 0, ilosc);
  printf("\n");
  for (i = 0; i < ilosc; i++) {
    printf("%d", tabl[i]);
  }
  return 0;
}
