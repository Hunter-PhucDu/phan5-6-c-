#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <math.h> 

using namespace std;

int Dem_ky_tu(char *chuoi)
{
	int length=strlen(chuoi), dem=0;
	for(int i=0; i<length; i++)
		if(chuoi[i]!=' ' && chuoi[i + 1] != ' ') 
			dem++;
	return dem;
}

int main()
{
cout << "Phan 6. Bai 9:\n";
char chuoi[100];
int q;
cout<<"Nhap chuoi ky tu: "; 
fgets(chuoi, sizeof(chuoi)+1, stdin);
//gets(chuoi);
cout<<"\nChuoi ky tu vua nhap la: "<< chuoi;
q=Dem_ky_tu(chuoi);
cout<<"\nSo ky tu cua chuoi la: "<< q;
		
cout<<endl;
getch();
return 0;
} 