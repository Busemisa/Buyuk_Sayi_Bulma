#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	 
    int x1,x2,x3;
    
    
    printf("lutfen x1 giriniz : ");
    scanf("%d",&x1);
    printf("lutfen x2 giriniz : ");
    scanf("%d",&x2);
    printf("lutfen x3 giriniz : ");
    scanf("%d",&x3);
    
    if((x1>x2) && (x1>x3)){
    	printf("x1 en buyuk sayidir");
	} 
	
	else if((x2>x1) && (x2>x3)){
		printf("en buyuk sayi x2 dir");
	}
	
	else{
		printf("en buyuk sayi x3 tur");
	}
    
    
	
	
	
	
	
	
	
	return 0;
}
