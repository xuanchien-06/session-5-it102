#include<stdio.h>

int main(){
	// c(bang cuu chuong)
	int c,ketqua;
	printf("moi ban nhap bang cuu chuong: ");
	scanf("%d",&c);
	for(int i=1;i<=10;i++){
		ketqua = c * i;
		printf("%d * %d = %d \n",c,i,ketqua);
	}
	return 0;
}
