#include<iostream>
#include"HugeInt.h"
using namespace std;
HugeInt operator+(HugeInt e,HugeInt f)
        {
        HugeInt *g;
        g->seta(e.geta()+f.geta());
        return *g;
        }
HugeInt operator-(HugeInt e,HugeInt f)
        {
        HugeInt *g;
        g->seta(e.geta()-f.geta());
        return *g;
        }

int main()
{
	HugeInt x;
	HugeInt y(28825252);
	HugeInt z("314159265358979323846");
	HugeInt result;
	cin>>x;
	result=x+y;
	cout<<x<<"+"<<y<<"="<<result<<endl;
	result=z-x;
	cout<<result;
}
