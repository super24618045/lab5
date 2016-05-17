#include"HugeInt.h"
	ostream &operator<<(ostream &out,const HugeInt &num)
	{
	out<<num.a;
	}
	istream &operator>>(istream &in,const HugeInt &num)
	{
	in>>num.a;
	}
	/*HugeInt HugeInt::operator+(HugeInt &e,HugeInt &f)
	{
	HugeInt *g;
	g->a=e->a+f->a;
	return *g;
	}
	HugeInt HugeInt::operator-(HugeInt &e,HugeInt &f)
	{
	HugeInt *g;
        g->a=e->a-f->a;
        return *g;
	}*/
	HugeInt::HugeInt(){}
	HugeInt::HugeInt(int d){
	a=d;
	}
	HugeInt::HugeInt(string s){
	a=atoi(s.c_str());
	}
	
	long int HugeInt::geta(){
	return a;
	}

	long int HugeInt::seta(int n){
	a=n;
	}	

