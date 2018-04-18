#include "MelnykModules.h"
#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

int main()

{
    setlocale(LC_ALL,"ukr");
    double massiv[9];
    massiv[0]=q_calculation(1,2,3);
    cout<<"TestCase Q#1"<<' '<<"(1,2,3)"<<" 3,63105"<<' '
        <<q_calculation(1,2,3)<<endl;
    if (3,63105-massiv[0]>=0.000001)
        cout<<"Passed"<<endl;
    else
        cout<<"Failed"<<endl;
    massiv[1]=q_calculation(1.2,1.3,1.4);
    cout<<"TestCase Q#2"<<' '<<"(1.2,1.3,1.4)"<<" -3,238324"<<' '
        <<q_calculation(1.2,1.3,1.4)<<endl;
    if (-3,238324-massiv[1]>=0.0001)
        cout<<"Passed"<<endl;
    else
        cout<<"Failed"<<endl;
    massiv[2]=q_calculation(2,3,4);
    cout<<"TestCase Q#3"<<' '<<"(2,3,4)"<<" 3,553549"<<' '
        <<q_calculation(2,3,4)<<endl;
    if (3,5535492-massiv[2] >=0.0000000001)
        cout<<"Passed"<<endl;
    else
        cout<<"Failed"<<endl;
    massiv[3]=q_calculation(45,45,45);
    cout<<"TestCase Q#4"<<' '<<"(45,45,45)"<<" 3,500341"<<' '
        <<q_calculation(45,45,45)<<endl;
    if (3,500341-massiv[3] >=0.0000001)
        cout<<"Passed"<<endl;
    else
        cout<<"Failed"<<endl;
    massiv[4]=q_calculation(0,0,1);
    cout<<"TestCase Q#5"<<' '<<"(0,0,1)"<<" 3,500000"<<' '
        <<q_calculation(0,0,1)<<endl;
    if (3,5000002-massiv[4] >=0.000001)
        cout<<"Passed"<<endl;
    else
        cout<<"Failed"<<endl;
    massiv[5]=s_calculation(1,1,0);
    cout<<"TestCase S#1"<<' '<<"(1,1,0)"<<" 1.000000"<<' '
        <<s_calculation(1,1,0)<<endl;
    if (massiv[5]-1.000000 <=0.0001)
        cout<<"Passed"<<endl;
    else
        cout<<"Failed"<<endl;
    massiv[6]=s_calculation(1,2,1);
    cout<<"TestCase S#2"<<' '<<"(1,2,1)"<<" 15.262172"<<' '
        <<s_calculation(1,2,1)<<endl;
    if (massiv[6]-15.262172<=0.0001)

    cout<<"Passed"<<endl;
    else
        cout<<"Failed"<<endl;
    massiv[7]=s_calculation(1.5,2,1);
    cout<<"TestCase S#3"<<' '<<"(1.5,2,1)"<<" 15.498441"<<' '
        <<s_calculation(1.5,2,1)<<endl;
    if (massiv[7]-15.498441<=0.0001)
        cout<<"Passed"<<endl;
    else
        cout<<"Failed"<<endl;
    massiv[8]=s_calculation(1,-1,1);
    cout<<"TestCase S#4"<<' '<<"(1,-1,1)"<<" 0.072195"<<' '
        <<s_calculation(1,-1,1)<<endl;
    if (massiv[8]-0.072195<=0.0001)
        cout<<"Passed"<<endl;
    else
        cout<<"Failed"<<endl;
    massiv[9]=s_calculation(1,2,0);
    cout<<"TestCase S#5"<<' '<<"(1,2,0)"<<" 4.000000"<<' '
        <<s_calculation(1,2,0)<<endl;
    if (massiv[9]-4.000000<=0.0001)
        cout<<"Passed"<<endl;
    else
        cout<<"Failed"<<endl;
    system("pause");
    return 0;

}
