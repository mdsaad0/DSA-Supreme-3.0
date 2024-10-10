#include <bits/stdc++.h>
using namespace std;

class Add
{
public:
    int sum(int a, int b)
    {
        cout<<"Adding integer..."<<endl;
        return a + b;
    }
    double sum(double a, double b)
    {
        cout<<"Adding double..."<<endl;
        return a + b;
    }
};
int main()
{
    Add add;
    cout<<add.sum(10,20)<<endl;
    cout<<add.sum(9.7,8.2)<<endl;

    return 0;
}