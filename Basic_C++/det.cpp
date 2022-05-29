#include <iostream>
#include <cmath>
using namespace std;

float roots(float dis , float*x1 , float *x2)
{
        float a, b, c ,realPart, imaginaryPart;

     if (dis > 0) {
        *x1 = (-b + sqrt(dis)) / (2*a);
        *x2 = (-b - sqrt(dis)) / (2*a);
        cout << "Roots are real and different." << endl;
      
    }
    
    else if (dis == 0) {
        cout << "Roots are real and same." << endl;
        *x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-dis)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }


}

int main() {

    float a, b, c, discriminant, realPart, imaginaryPart;

    float * x  = new float;
    float * x2  = new float;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    cout<<roots(discriminant , x , x2);
    cout<<"root1"<<*x<<endl;
    cout<<"root2"<<*x2<<endl;
    
    
   
    return 0;
}