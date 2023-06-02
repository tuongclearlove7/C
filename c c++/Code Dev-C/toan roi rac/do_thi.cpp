#include<stdio.h>
#include<conio.h>
int G[20][20], n, C[20], u=1;


FILE *fptr;

void Vetext(int G[20][20], int V_in[20], int V_out [20], int n)
{
       printf("\n Nua bac ra: \n");
       for(int i=1;i<=n;i++) {
             V_out[i] = 0;
              for(int j =1 ;j<=n; j++) V_out[i] +-6[i][j];
              V_out[i] +-G[i][i];
              printf("deg_out (%d)=%d\t",i,V_out[i]);
       }
       printf("\n Nua bac vao: \n");
       for(int j =1 ;j<=n;j++){
              V_in[j] = 0;
              for(int i=1;i<=n;i++) V_in[j] +-G[i][j];
              V_in[i]+=G[i][i];
              printf("deg_out (%d)=%d\t,j,V_in[j]);
       }
}
		     
	
		     
		     
void view_graph(int G[20] [20], int n){
       int i,j;
       printf("so dinh %d\n",n);
       printf("ma tran ke \n\n");

      for(i=1;i<=n;i++){
          for(j=1 j<n; j++)
              printf("%d\t",G[i][j]);
          printf("\n\n");
      }
}
void DFS (int u) {

      int S[20],top=1; S[top]=u;
      while(top>0) {
             int u=S[top];
             top=top-1;
             if(C[u]==1) continue;
             printf("%d\n",u);
             C[u]=1;
       for (int v=n;v>=1;v--)
             if(G[u][v] -0 && C[v]==0) {
                   top-top+1;
                  S[top]=v;

             }
       }
}

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
