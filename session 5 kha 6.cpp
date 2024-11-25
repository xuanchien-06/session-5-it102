#include<stdio.h>

int main(){
	int a,b,tong,hieu,tich,luachon;
	float thuong;
	printf("nhap vao so thu nhat: ");
	scanf("%d",&a);
	printf("nhap vao so thu hai: ");
	scanf("%d",&b);
	printf("hay lua chon phep tinh can tinh\n");
	printf("CALCULATOR\n");
	printf("1.Tong 2 so\n");
	printf("2.Hieu 2 so\n");
	printf("3.Tinh 2 so\n");
	printf("4.Thuong 2 so\n");
	printf("5.Thoat\n");
	printf("\n");
	scanf("%d",&luachon);
	switch(luachon){
		case 1:
			tong=a+b;
			printf("Ket qua cua phep tinh %d + %d = %d",a,b,tong); 
			break;
		case 2:
			hieu=a-b;
			printf("Ket qua cua phep tinh %d - %d = %d",a,b,hieu);
			break;
		case 3:
			tich=a*b;
			printf("Ket qua cua phep tinh %d x %d = %d",a,b,tich);
			break;
		case 4:
			thuong=a/b;
			if(b > 0){
				printf("Ket qua cua phep tinh %d / %d = %.2f",a,b,thuong);
			}else{
				printf("Du lieu khong phu hop");
			}
			break;
			
		case 5:
			printf("Thoat chuong trinh");
			break;	
			}
	
    return 0;
}
