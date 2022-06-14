#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <math.h> 

using namespace std;

int Dem_dau_cong(char *chuoi)
{
	int length=strlen(chuoi), dem=0;
	for(int i=0; i<length; i++)
		if(chuoi[i]=='+') 
			dem++;
	return dem;
}
int Dem_dau_tru(char *chuoi)
{
	int length=strlen(chuoi), dem=0;
	for(int i=0; i<length; i++)
		if(chuoi[i]=='-') 
			dem++;
	return dem;
}
int Dem_dau_nhan(char *chuoi)
{
	int length=strlen(chuoi), dem=0;
	for(int i=0; i<length; i++)
		if(chuoi[i]=='*') 
			dem++;
	return dem;
}
int Dem_dau_chia(char *chuoi)
{
	int length=strlen(chuoi), dem=0;
	for(int i=0; i<length; i++)
		if(chuoi[i]=='/') 
			dem++;
	return dem;
}

int main()
{
cout << "Phan 6. Bai 9:\n";
char chuoi[100];
int q, a, b,c;
		cout<<"Nhap chuoi ky tu: "; 
		fgets(chuoi, sizeof(chuoi)+1, stdin);
		//gets(chuoi);
		cout<<"\nChuoi ky tu vua nhap la: "<< chuoi;
		
		q=Dem_dau_cong(chuoi);
			cout<<"\nSo ky tu + la: "<< q;
		a=Dem_dau_tru(chuoi);
		    cout<<"\nSo ky tu - la: "<< a;
        b=Dem_dau_nhan(chuoi);
		    cout<<"\nSo ky tu * la: "<< b;
        c=Dem_dau_chia(chuoi);
		    cout<<"\nSo ky tu / la: "<< c;
	cout<<endl;
getch();
return 0;
} 