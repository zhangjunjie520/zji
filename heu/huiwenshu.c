#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int is(int x) {
	int chushi=x;
	int zhong=0;
	int xiang;
	while(x>0){
		xiang=x%10;
		zhong=zhong*10+xiang;
		x=x/10;}
	return zhong==chushi;
}
void Find(int y){
	int i;
	int h=0;
	for(i=0;i<=y;i++){
		if(is(i)){printf("%d,",i);h++;}
		if(h==10){printf("\n");h=0;}
	}
	
}
int main(int argc, char *argv[]) {
	int a;
	scanf("%d",&a);
	Find(a);
	
	
	return 0;
}
