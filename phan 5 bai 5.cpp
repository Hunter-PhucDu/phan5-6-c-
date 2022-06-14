#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <string>

using namespace std;

int main()
{
cout << "Phan 5. Bai 5:\n";
char chuoi[100];
cout<< "nhap chuoi: ";
gets(chuoi);
char c;
cout<< "nhap ky tu bat ky: ";
cin >> c;
int count = 0;
int length=strlen(chuoi);
for (int i = 0; i < length; i++) 
	{
      if (chuoi[i] == c)
	  	 {
            count++;
         }
    }
cout <<"so lan xuat hien cua ky tu '"<<c<<"' la: "<<count;		
cout<<endl;
getch();
return 0;
} 