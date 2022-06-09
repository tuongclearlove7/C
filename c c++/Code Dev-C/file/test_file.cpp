#include<stdio.h>

#include<string.h>

int demKiTu(char xau[])

{

            int dem=1,j,temp;

            for(int i=1;i<strlen(xau);i++)

            {

if(xau[i] != ' ')// neu ky tu khac ky tu trong thi thuc hien lenh

{

            temp = 1;// moi lan lap i gan temp = 1

            for(j=i-1;j>=0;j--)// xet tu ky tu truoc tro di den xau[0]

            {
                if(xau[j] == xau[i])

                {

                temp = 0;
                break;
                }
            }
            if(temp == 1)
				dem++;

}

    }

            return dem;
}

int main()

{

            char xau[99];

            printf("Nhap xau: ");

            gets(xau);

            printf("\nCo %d ki tu trong xau!",demKiTu(xau));

}





