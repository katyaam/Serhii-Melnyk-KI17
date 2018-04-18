#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

 short valid2(double x,double y,double z)
 {
   if (x>100 && y>100 && z>100){
    return 0;
   }
    if (x>400 || y>400 || z>400){
    return 0;
   }
   return 1;
 }

  short valid(double z, double x, double y)
  {
    if ((z*z-(x+y))==0)
    return 1;
    return 2;
  }

  double q_calculation (double x, double y, double z)
  {
    setlocale(LC_CTYPE,"ukr");
    double t,q,k;
    k = 0;

    if ((sin(x))/(sqrt(pow(log(abs(y*z)),4)))>pow(10,38)){
        cout<<"Обчислення неможливi,введiть менше значення!";
        return 0;
    }
    else t=(sin(x))/(sqrt(pow(log(abs(y*z)),4)));

   if ((z*z-(x+y)) >pow(10,38)){
        cout<<"Обчислення неможливi,введiть менше значення!";
       return 0;
    }
   else  q=z*z-(x+y);

    if (z*(t/q)+3.5 >pow(4.54728408833987,2985)){
            cout<<"Обчислення неможливi,введiть менше значення!";
       return 0;

    }
   else k = z*(t/q)+3.5;

   return k;
  }

double s_calculation (double x, double y, double z)
  {
    setlocale(LC_CTYPE,"ukr");
    double k = 0;
    const double pi = 3.1415926535897932384626433832795;
    if (pow(z+y+z,2)- sqrt(abs((2*pi*sqrt(z/2))/(y+4*(pow(x,3)+cos(z)))))>pow(10,38))
    {
      cout<<"Обчислення неможливi,введiть менше значення!";
      return 0;
    }
    else k =pow(z+y+z,2)- sqrt(abs((2*pi*sqrt(z/2))/(y+4*(pow(x,3)+cos(z)))));
    return k;
  }


