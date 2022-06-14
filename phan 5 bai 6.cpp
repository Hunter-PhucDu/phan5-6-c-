#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <string>

using namespace std;

void xoakhoangtrang(char *s)
{
for(int i=0;i<strlen(s);i++)
 {
	  // xoa ktrang o ky tu +
	  while (s[i]=='+' && s[i+1]==' ') 
	         strcpy(&s[i+1], &s[i+2]);
      while (s[i]=='+' && s[i-1]==' ') 
	         strcpy(&s[i-1], &s[i]);
      // xoa ktrang o ky tu -
	  while (s[i]=='-' && s[i+1]==' ') 
	         strcpy(&s[i+1], &s[i+2]);
      while (s[i]=='-' && s[i-1]==' ') 
	         strcpy(&s[i-1], &s[i]);
      // xoa ktrang o ky tu *
	  while (s[i]=='*' && s[i+1]==' ') 
	         strcpy(&s[i+1], &s[i+2]);
      while (s[i]=='*' && s[i-1]==' ') 
	         strcpy(&s[i-1], &s[i]);
      // xoa ktrang o ky tu /
	  while (s[i]=='/' && s[i+1]==' ') 
	         strcpy(&s[i+1], &s[i+2]);
      while (s[i]=='/' && s[i-1]==' ') 
	         strcpy(&s[i-1], &s[i]);
 }
cout<<s;
}

int main()
{
cout << "Phan 5. Bai 6:\n";
char St[100];
cout<< "nhap chuoi: ";
fgets(St, sizeof(St)+1, stdin);
cout<< "chuoi vua nhap la: "<< St << endl;;
cout<< "chuoi sau khi sua la: ";
xoakhoangtrang(St);		
cout<<endl;
getch();
return 0;
} 