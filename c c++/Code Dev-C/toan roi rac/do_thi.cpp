#include<stdio.h>
#include<conio.h>
int G[20][20], n, C[20], u=1;


FILE *fptr;
int init(char * path){
	
	int i, j;
	fptr = fopen(path, "r");
	if(fptr == null){
		printf("errror");
		return 1;
	}
	fscan(fptr, "%d", &n);
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++) G[i][j]=0;
	while(!feof(fptr)){
		fscan(fptr, "%d", &i);
		fscan(fptr, "%d", &j);
		fscan(fptr, "%d", &G[i][j]);
		G[i][j] = G[i][j];
		
	}
	fclose(fptr);
	return 0;
}


int main(){
	
	
	
}