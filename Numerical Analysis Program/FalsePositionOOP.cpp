#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.001

class calculate{
    public:
   

    calculate(double a, double b){
        if(func(a) * func(b) >= 0){
            cout <<" Wrong assumption of a and b."<<endl;
            return;
        }

        double c=a;;
        while(abs(func(c)) >= EPSILON ){
            c = (a*func(b) - b*func(a)) / (func(b) - func (a));
            if(func(c) ==0){
                break;
            }
            if(func(a)* func(c) < 0 ){

                b = c;
            }
            else
                a=c;
        }
        cout << "The value of Root is : " << c <<endl;

    }

    double func( double x){

        return x*x*x - x*x + 2;
    }





};

int main()
{
    int a= -500, b=500;
    calculate c(a,b);

    return 0;
}
