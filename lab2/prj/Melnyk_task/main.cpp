#include <iostream>
#include <windows.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <cmath>
#include <iomanip>
#include "MelnykModules.h"

using namespace std;

int Logic(char a, char b)

{
    bool f=a+1<b;
    if (f==0)
        return 0;
    else
        return 1;
}
void Name()
{
    cout<<" -------------------"<<endl;
    cout<<"|Melnyk Sergey CNTU |"<<endl;
    cout<<"|Melnyk Sergey CNTU|"<<endl;
    cout<<" -------(c)---------"<<endl;
}
int main()
{
    Name();
    setlocale (LC_CTYPE,"ukr");
	int sw;
	while(sw!=0)
    {
        cout << "Натиснувши 1 ви отримаєте логiчний результат:  a+1<b" << endl << "Натиснувши 2 ви отримаєте розрахунки попереднiх задач!" << endl<<"Натиснувши iнший символ програма завершиться!"<<endl;;
        cin >> sw;
        switch (sw)
        {
            case 1:
            {
                string d,f;
                char a,b;
                cout << "Введiть перший параметр: ";
                cin>>d;
                a=d[0];
                cout << "Введiть другий параметр: ";
                cin>>f;
                b=f[0];
                cout << "Логiчний результат: "<< Logic(a,b)<<endl;
                break;
            }
            case 2:
            {
                double x, y, z;
                cout << "Введiть X (при вводi дробу використовуйте КРАПКУ): ";
                while (!(cin >> x))
                {
                    cout << "Некоректнi данi!\n";
                    cin.clear();
                    fflush(stdin);
                }
                cout <<  "Введiть Y (при вводi дробу використовуйте КРАПКУ): ";
                while (!(cin >> y))
                {
                    cout << "Некоректнi данi!\n";
                    cin.clear();
                    fflush(stdin);
                }
                cout <<  "Введiть Z (при вводi дробу використовуйте КРАПКУ): ";
                while (!(cin >> z))
                {
                    cout << "Некоректнi данi!\n";
                    cin.clear();
                    fflush(stdin);
                }
                if (valid(z,x,y)==1)
                {
                    cout<<"Неможливо ділити на нуль, введіть інші значення!"<<endl;
                    system("pause");
                    return 0;
                }
                if (valid2(x,y,z) == 0)
                {
                    cout<<"Обчислення неможливi,введiть менше значення!"<<endl;;
                    system("pause");
                    return 0;
                }
                cout<<"Q= " << q_calculation(x,y,z)<<endl;
                cout<<"S= " << fixed<<(s_calculation(x,y,z))<<endl;
                int s,c,l;
                cout << "Надалi будуть використовуватися цiлi значення" << endl;
                c = round(x);
                l = round(y);
                s = round(z);
                cout << "Числа у вiсiмковiй системi числення:" << endl;
                cout << std::oct << "X = " << c<<" " << " Y = " << l <<" "<<"Z = "<<s<<" "<< endl;
                cout << "Числа у десятковій системi числення:" << endl;
                cout << std::dec << "X = " << c <<" "<< " Y = " << l<<" " <<"Z = "<<s<<" "<< endl;
                break;
            }
        }
    }
    system("pause");
}
