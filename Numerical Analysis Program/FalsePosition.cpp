#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.001

 double func (double x){
        return x*x*x - x*x +2;
}

void bisection(double a, double b){
    if(func(a) * func(b) >= 0){
        cout <<" Wrong assumption of a and b."<<endl;
        return;
    }

    double c=a;;
    while(b-a >= EPSILON ){
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

int main(){
    int a = -500,b = 500;
    bisection(a,b);
    return 0;

}
