#include <stdio.h>

int main(){
	int n,m;
		printf("Nhap so dong cua ma tran: ");
    	scanf("%d", &n);
    	printf("Nhap so cot cua ma tran: ");
    	scanf("%d", &m);
    int a[n][m]; 	
		 printf("Nhap gia tri cac phan tu trong ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
	  for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n - 1; j++) { 
            for (int f = 0; f < n - j - 1; f++) { 
                if (a[f][i] > a[f + 1][i]) { 
                    int temp = a[f][i];
                    a[f][i] = a[f + 1][i];
                    a[f + 1][i] = temp;
                }
            }
        }
    }
    	printf("Ma tran sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }



return 0;
}

