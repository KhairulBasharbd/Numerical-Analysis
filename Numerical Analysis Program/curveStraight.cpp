#include<bits/stdc++.h>
using namespace std;
class Cal{
public:
    void Calc(){
        int n=5;
        double x[]={1,2,3,5,6}, y[]={12,22,40,55,80};
        double sumx=0, sumy=0, sumxx=0, sumxy=0;
        for(int i=0;i<5; i++){
            sumx = sumx + x[i];
            sumy = sumy + y[i];
            sumxx = sumxx + x[i]*x[i];
            sumxy = sumxy + x[i]*y[i];
        }

        double a = (sumy*sumxx - sumxy*sumx) / (n*sumxx - sumx*sumx);
        double b = (sumxy*n - sumy*sumx) / (n*sumxx - sumx*sumx);

        cout << "The best fit value of straight line is y = "<<b<<"x + "<<a<<"\n";

    }


};


int main(){
    

    Cal curve;
    curve.Calc();
    return 0;
}
