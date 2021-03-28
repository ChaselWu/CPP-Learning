#include<iostream>

int a[]{1, 2, 3, 4, 5, 6, 7};
void swap(int&, int);

int main() {
    int b{199};
    
    return 0; 
}

int swap(int x[], int y) {
  int temp = x[0];
  x[0] = y;
}