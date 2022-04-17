#include<bits/stdc++.h>
using namespace std;

class Cal{
    public:
    double func(double x){

       return 1/x;

    }
    void evaluate(){
        double x[20],y[20],a,b,sum;
        int n;
        cin >>a>>b>>n;
        double h = (b-a) / n;
        sum=0;
        for(int i=0;i<=n;i++){
            x[i] = a + h*i;
            y[i] = func(x[i]);

            if(i!=0 && i!=n){

                sum = sum  + h*y[i];
            }
        }
        sum = sum + (h/2.0) * (y[0] + y[n]);

        cout << "The area of trapizium is " <<sum <<endl;
    }

};

int main()
{
    Cal trapizoidal;
    trapizoidal.evaluate();
    return 0;
}
