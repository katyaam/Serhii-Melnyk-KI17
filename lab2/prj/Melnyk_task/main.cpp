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

void Logic(){
    int a=0,b=0;
    bool s;
    cout << "����i�� ������ ��������: ";
    cin>>a;
    cout << "����i�� ������ ��������: ";
    cin>>b;
    s=a+1<b;
    cout << "������� ���������: "<<s<<endl;
}
void Name()
{
    system("chcp 1251");
    system("cls");
    cout<<" -------------------"<<endl;
    cout<<"|Melnyk Sergey CNTU |"<<endl;
    cout<<"|������� ����� ����|"<<endl;
    cout<<" ---------�---------"<<endl;
}
int main()
{
    Name();
	int sw;
	while(sw!=0)
    {
        cout << "���������� 1 �� �������� ���i���� ���������:  a+1<b" << endl << "���������� 2 �� �������� ���������� ��������i� �����!" << endl<<"���������� i���� ������ �������� �����������!"<<endl;;
        cin >> sw;
        switch (sw)
        {
            case 1:
            {
                Logic();
                break;
            }
            case 2:
            {
                double x, y, z;
                cout << "����i�� X (��� ����i ����� �������������� ������): ";
                while (!(cin >> x))
                {
                    cout << "���������i ���i!\n";
                    cin.clear();
                    fflush(stdin);
                }
                cout <<  "����i�� Y (��� ����i ����� �������������� ������): ";
                while (!(cin >> y))
                {
                    cout << "���������i ���i!\n";
                    cin.clear();
                    fflush(stdin);
                }
                cout <<  "����i�� Z (��� ����i ����� �������������� ������): ";
                while (!(cin >> z))
                {
                    cout << "���������i ���i!\n";
                    cin.clear();
                    fflush(stdin);
                }
                if (valid(z,x,y)==1)
                {
                    cout<<"��������� ����� �� ����, ������ ���� ��������!"<<endl;
                    system("pause");
                    return 0;
                }
                if (valid2(x,y,z) == 0)
                {
                    cout<<"���������� ��������i,����i�� ����� ��������!"<<endl;;
                    system("pause");
                    return 0;
                }
                cout<<"Q= " << q_calculation(x,y,z)<<endl;
                cout<<"S= " << fixed<<(s_calculation(x,y,z))<<endl;
                int s,c,l;
                cout << "�����i ������ ����������������� �i�i ��������" << endl;
                c = round(x);
                l = round(y);
                s = round(z);
                cout << "����� � �i�i����i� ������i ��������:" << endl;
                cout << std::oct << "X = " << c<<" " << " Y = " << l <<" "<<"Z = "<<s<<" "<< endl;
                cout << "����� � ��������� ������i ��������:" << endl;
                cout << std::dec << "X = " << c <<" "<< " Y = " << l<<" " <<"Z = "<<s<<" "<< endl;
                break;
            }
        }
    }
    system("pause");
}
