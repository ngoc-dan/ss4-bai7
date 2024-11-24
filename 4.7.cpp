#include <stdio.h>
int main(){
	int y;
	printf("nhap nam : ");
	scanf("%d",&y);
	    	if((y%400 == 0)||(y%4 == 0 && y% 100 !=0)){
		    	printf("la nam nhuan\n");
			}
			else{
				printf("kh phai nam nhuan\n");
			}
			
			return 0;
		}
