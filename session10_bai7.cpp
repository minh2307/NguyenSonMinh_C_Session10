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
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            for (int f = 0; f < m - j - 1; f++) {
                if (a[i][f] > a[i][f + 1]) {
                    int temp = a[i][f];
                    a[i][f] = a[i][f + 1];
                    a[i][f + 1] = temp;
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

