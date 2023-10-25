#include <iostream>
using namespace std;

int main() {
setlocale(0,"");
int year, summ;
double persent=1.03;
cout<<"введите сумму: ";
cin>>summ;
cout<<"введите количество лет: ";
cin>>year;
cout<<year*persent*summ;

  return 0;
}