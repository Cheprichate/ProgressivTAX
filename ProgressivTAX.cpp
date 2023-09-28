#include <iostream>
int pay;
int tax;

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "ВВедите заработанную сумму : \n";
    std::cin >> pay;

   if (pay > 50000) {
        tax += ( pay - 50000 ) * 30 / 100 ;
        pay = 50000;
   }
   if (pay > 10000) {
       tax += ( pay - 10000 ) * 20 / 100 ;
       pay = 10000;
   }
       tax += pay * 13 / 100;

    std::cout << "Налог составит :"<< tax << "\n";
}