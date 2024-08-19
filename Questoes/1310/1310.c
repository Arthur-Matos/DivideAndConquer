#include <stdio.h>
#include <limits.h>

int maxLucro(int dias, int custo, int receitas[]) {
    int lucroDiario[dias];
    
    for (int i = 0; i < dias; i++) {
        lucroDiario[i] = receitas[i] - custo;
    }
    
    int maxEndingHere = 0;
    int maxSoFar = 0;
    
    for (int i = 0; i < dias; i++) {
        maxEndingHere = (maxEndingHere + lucroDiario[i] > 0) ? maxEndingHere + lucroDiario[i] : 0;
        if (maxEndingHere > maxSoFar) {
            maxSoFar = maxEndingHere;
        }
    }
    
    return maxSoFar;
}

int main() {
    int n, custoPorDia;
    
    while (scanf("%d", &n) != EOF) {
        scanf("%d", &custoPorDia);
        
        int receitas[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &receitas[i]);
        }
        
        int resultado = maxLucro(n, custoPorDia, receitas);
        printf("%d\n", resultado);
    }
    
    return 0;
}
