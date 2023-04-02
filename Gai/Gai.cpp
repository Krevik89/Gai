#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>
#include "database.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    database bd;

    bd.Add("AM9999CH", "Нарушение А");
    bd.Add("AM9999CH", "Нарушение В");
    bd.Add("AM9999CH", "Нарушение С");
    bd.Add("AA2099AB", "Нарушение А");
    bd.Add("BH1000CI", "Нарушение С");
    bd.Add("AM9333BA", "Нарушение С");
    bd.Add("AM9055CT", "Нарушение А");
    bd.Add("AM9055CT", "Нарушение В");

    cout << "Полная распечатка базы данных" << endl;
    bd.PrintAll(bd.ReturnRoot());

    cout << "\nРаспечатка данных по заданному номеру: BH1000CI" << endl;
    bd.PrintNumber("BH1000CI");

    cout << "\nРаспечатка данных по диапазону номеров: AA0000AA - XX9999XX" << endl;
    bd.PrintRangeNumber("AA0000AA", "XX9999XX");
   
}

