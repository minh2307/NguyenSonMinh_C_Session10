#include <stdio.h>

int main(){
	int a[8]={3,6,7,2,4,5,55,32};
	for(int i=0; i<8; i++){
		for(int j=0; j < 8-i-1; j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0; i < 8; i++){
		printf("%d ",a[i]);
	}
		printf("\n");
	int value;
 		printf("nhap vao 1 so nguyen bat ki: ");
 		scanf("%d",&value);	
	int start =0;
	int end=7;

	while(start<=end){	
		int mid=(start+end)/2;
		if(a[mid]==value){
			printf("phan tu can tim o vi tri %d",mid);
			return 0;
		}else if(a[mid]>value){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
		printf("khong tim thay phan tu trong mang");
	
	

return 0;
}

