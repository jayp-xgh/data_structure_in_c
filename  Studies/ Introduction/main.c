  #include <stdio.h>
  #include <limits.h>

  int main(){
    int min = INT_MIN;
    int max = INT_MAX;
    short unsigned int total = USHRT_MAX;
    short int minShort = SHRT_MIN;
    short int maxShort = SHRT_MAX;
    
    printf(
      "Intervalo de inteiro é de %d a %d \n"
      "Valor mínimo curto: %d \n"
      "Valor máximo curto: %d \n"
      "Valor total é: %u \n",
      min, max, minShort, maxShort, total
    );

    return 0;
  }