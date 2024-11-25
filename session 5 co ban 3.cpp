#include<stdio.h>

int main(){
	int n,i,tong=0;
	printf("hay nhap 1 so nguyen duong: ");
	scanf("%d",&n);
	while(n<=0){
		printf("so khong hop le, vui lòng nhap lai so nguyen duong");
		scanf("%d",&n);
		}
		for(i=1;i<=n;i++){
			tong += i;
			
			}
			printf("tong ca so trong khoang tu 1 den %d la %d \n",n,tong);
			return 0;
}
	
