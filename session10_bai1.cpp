#include <stdio.h>

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9},value;
		printf("nhap vao phan tu bat ky: ");
		scanf("%d",&value);
	for(int i =0; i < sizeof(a)/sizeof(int);i++){	
		if(a[i] == value){
			printf("phan tu %d co ton tai trong mang",value);
			break;
		}else{
			printf("phan tu %d khong ton tai trong mang",value);
			break;
		}
	}
	



return 0;
}

