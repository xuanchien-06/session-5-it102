#include <stdio.h>

int main(){
	int x,ketqua;
	
	for(x=1;x<10;x++){
		printf("Bang cuu chuong %d\n",x);
		for(int i=1;i<=10;i++){
			ketqua = x*i;
			printf("%d x %d = %d\n",x,i,ketqua);
		}
	}
	return 0;
}
