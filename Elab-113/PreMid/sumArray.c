#include <stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int m1[m][n], m2[m][n];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", m1[i][j] + m2[i][j]);
        }
        printf("\n");
    }
}
