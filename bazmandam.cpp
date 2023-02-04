#include <iostream>
#include <cmath>
using namespace std;

class baz {
    private:
        double a, b, c, d;
    public:
        baz(double a1, double b1, double c1, double d1);
        ~baz();
        void tpel();
        double fi(double x1);
        friend void changing(baz &ob);
};
baz::baz(double a1, double b1, double c1, double d1){
    a = a1;
    b = b1;
    c = c1; 
    d = d1;
}
baz::~baz(){
    cout<<"destructor"<<endl;
}
void baz::tpel(){
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}

double baz::fi(double x1){
    double s = a*pow(x1,3) + b*pow(x1,2) + c*x1 + d;
    return s;
}
void changing(baz &ob){
    ob.a = 10;
    ob.b = 20; 
    ob.c = 30;
    ob.d = 40;
}
int main(){
    double a, b, c, d;
    cin>>a>>b>>c>>d;
    baz ob(a, b, c, d);
    ob.tpel();
    double s = ob.fi(3);
    cout<<s<<endl;
    changing(ob);
    ob.tpel();
    s = ob.fi(3);
    cout<<s<<endl;
    return 0;
}
