#include <iostream>
using namespace std;

class array {
    private:
        double *p;
        int n;
    public:
        array(double *p1, int n1);
        ~array();
        double mijin();
        double gumar();
};
array::array(double *p1, int n1){
    p = p1;
    n = n1;
}
array::~array(){
    delete [] p;
}
double array::mijin(){
    double s = 0, q = 0;
    for (int i = 0; i < n; i++){
        s += p[i];
        q++;
    }
    return s / q;
}
double array::gumar(){
    double s = 0; 
    double m = mijin();
    for (int i = 0; i < n; i++)
        if (p[i] > m)
            s += p[i];
            
    return s;
}
int main(){
    int n;
    do cin>>n; while(n < 1);
    double *p;
    p = new double[n];
    for (int i = 0; i < n; i++)
        cin>>p[i];
    array ob(p, n);
    double s = ob.gumar();
    cout<<s;
    return 0;
}
