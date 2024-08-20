#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10001
#define MAX 9999.99999

typedef struct structPonto {
    double x;
    double y;
} Ponto;

Ponto ponto[N];

double calcularDistancia(Ponto a, Ponto b) {
    double d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    if (d > MAX)
        d = MAX + 1.0;
    return d;
}

double minimo(double a, double b) {
    if (a < b)
        return a;
    return b;
}

double parMaisProximo(long a, long b) {
    long i, j, k;
    double d1, d2, d;
    double xMeio;
    if (a == b) {
        return MAX + 1.0;
    } else if (b - a == 1) {
        return calcularDistancia(ponto[b], ponto[a]);
    } else {
        d1 = parMaisProximo(a, (a + b) / 2);
        d2 = parMaisProximo((a + b) / 2 + 1, b);
        d = minimo(d1, d2);
        j = (a + b) / 2;
        xMeio = ponto[j].x;
        do {
            k = (a + b) / 2 + 1;
            while (xMeio - ponto[k].x < d && k <= b) {
                d1 = calcularDistancia(ponto[k], ponto[j]);
                d = minimo(d, d1);
                k++;
            }
            j--;
        } while (xMeio - ponto[j].x < d && j >= a);
        return d;
    }
}


int comparar(const void *a, const void *b) {
    Ponto *sa = (Ponto *)a;
    Ponto *sb = (Ponto *)b;
    if (sa->x > sb->x) {
        return 1;
    } else if (sa->x < sb->x) {
        return -1;
    } else {
        if (sa->y > sb->y)
            return 1;
        else
            return -1;
    }
    return -1;
}

int main() {
    long i, n;
    double d;
    while (scanf("%ld", &n) == 1) {
        if (n == 0) break;
        for (i = 0; i < n; i++) {
            scanf("%lf %lf", &ponto[i].x, &ponto[i].y);
        }
        qsort(ponto, n, sizeof(ponto[0]), comparar);
        d = parMaisProximo(0, n - 1);

        if (d > MAX) {
            printf("INFINITY\n");
        } else {
            printf("%.4lf\n", d);
        }
    }
    return 0;
}