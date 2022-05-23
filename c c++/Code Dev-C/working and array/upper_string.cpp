#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char hvt[30];
	gets(hvt);
	int j=0;
		strlwr(hvt);
	while(j<=strlen(hvt))
	{
		if(hvt[j]==' ')
		{break;}
		else 
		hvt[j]=toupper(hvt[j]);
		j++;
	}
	cout << hvt;
}
