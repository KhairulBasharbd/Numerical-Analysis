#include<bits/stdc++.h>
using namespace std;

class Cal{
    public:
    double func(double x){

       return log(x);

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

            if(i==0 ||i==n){

                 sum = sum  + y[i];
            }

            else if( i%2==0 ){

                sum = sum  + 2*y[i];
            }
            else if (i%2 == 1){
                sum = sum  + 4*y[i];
            }
        }
        sum =  (h/3.0) * (sum);

        cout << "The area of trapizium is " <<sum <<endl;
    }

};

int main()
{
    Cal simpson;
    simpson.evaluate();
    return 0;
}
