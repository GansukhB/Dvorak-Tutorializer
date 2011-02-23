#include <stdio.h>
#include <conio.>
int main(){
	freopen("kblayout.conf", "r", stdin);
	int k, o;
	while(scanf("%c %c\n", &k, &o)!=EOF){
		printf("%c%c\n", k, o);
	}
return 0;
}
