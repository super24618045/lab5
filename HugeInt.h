#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;
class HugeInt{
        friend ostream &operator<<(ostream &,const HugeInt &);
        friend istream &operator>>(istream &,const HugeInt &);
public:

        HugeInt();
        HugeInt(int d);
        HugeInt(string s);
	long int geta();
	long int seta(int n);
private:
        long int a;

};

