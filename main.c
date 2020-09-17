#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int a;
    int b;
    float i;
	
	printf(" 분자를 입력하세요 : " );
	scanf("%a", &a);
	printf(" 분모를 입력하세요 : " );
	scanf("%b", &b);
	
	
	  
	i = b/a;	
   printf(" 나누기의 결과는 %i 입니다. \n", i);
     
	return 0;
}
