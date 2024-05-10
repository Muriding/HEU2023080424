#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a;
	char b;
	char c;
	char d;
	char e;
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
	if(a<='z'&&a>='w'){a=a-22;}
	else{a=a+4;}
	
	if(b<='z'&&b>='w'){b=b-22;}
	else{b=b+4;}
	
	if(c<='z'&&c>='w'){c=c-22;}
	else{c=c+4;}
	
	if(d<='z'&&d>='w'){d=d-22;}
	else{d=d+4;}

	if(e<='z'&&e>='w'){e=e-22;}
	else{e=e+4;}

    
	printf("%c%c%c%c%c",a,b,c,d,e);
	return 0;
}