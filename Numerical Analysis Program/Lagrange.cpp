#include <bits/stdc++.h>
using namespace std;
class cal
{
public:
    void evaluate()
    {
        double x[100], y[100], sum = 0, xp;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }
        cin >>xp;
        for (int i = 0; i < n; i++)
        {
            double p=1;
            for (int j = 0; j < n; j++)
            {
                if(i!=j){
                    p = p * (xp-x[j] ) / (x[i]-x[j]);
                }
            }
            sum = sum + p * y[i];
        }
        cout <<"The value is "<<sum<<endl;
    }
};

int main()
{
    cal sample;
    sample.evaluate();
}