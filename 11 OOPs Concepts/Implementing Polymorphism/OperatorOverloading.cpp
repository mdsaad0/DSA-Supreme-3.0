#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real=this->real + obj.real;
        res.imag = this->imag + obj.imag;

        return res;
    }

    void print()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
};

int main()
{
    Complex A(10,5);
    Complex B(2,4);

    Complex C=A+B;
    C.print();
    return 0;
}