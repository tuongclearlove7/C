#include <stdio.h>
#include <string.h>


char* daoNguocTuCoTrongChuoi(char *S){
    
    char* ketQua = new char[strlen(S)];
    int j = 0;
    int dem = 0;

    
    for(int i = strlen(S); i >= 0; i--){
        if (i == strlen(S) || i == strlen(S)-1) 
            continue;

        
        dem++;

        
        if (S[i] == ' '){
            for(int k = i; k < i+dem; k++){
                ketQua[j] = S[k+1];
                j++;
            }
            ketQua[j-1] = ' ';
            dem = 0;
        }

        
        if (i == 0){
            for(int k = i; k < i+dem; k++){
                ketQua[j] = S[k];
                j++;
            }
        }

    }

    ketQua[strlen(S)-1] = '\0';

    return ketQua;
}

int main(){
    char S[300];

    printf("Nhap vao chuoi: ");
    fflush(stdin);
    fgets(S, 300, stdin);

    printf("Ket qua la: ");
    char* ketQua = daoNguocTuCoTrongChuoi(S);

    puts(ketQua);
}









