#include <iostream>
#pragma hdrstop
#pragma argsused
using namespace std;
int main(int argc, char* argv[])
{int i, n, l;
cout<<"Vvedite dlinu massiva"<<endl;
cin>>n;
int *mas =new int[n];
cout<<"Vvedite massiv"<<endl;
for(i=0; i<n; i++)
{cin>>mas[i];}
cout<<"Vvedite dlinu serii"<<endl;
cin>>l;
for(i=0; i<n; i++)
{if (i<=n-l) {
for (int j=i; j<i+l; j++)
{if (mas[j]!=mas[i]){if(i<n){cout<<mas[i]<<ends;}break;}
if(j==(i+l-1)){cout<<"0"<<ends; i=i+l;}}}
else {cout<<mas[i]<<ends;}}
delete mas;
system("PAUSE");
return 0;}
