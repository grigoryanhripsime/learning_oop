#include <iostream>
using namespace std;

class pear{
    private:
        double *x; int n;
        
    public:
        pear(int n1, double *x1){
            n=n1;
            x=x1;
        } 
        
        ~pear(){}
        double mij(){
            double S=0; int k=0;
    for(int i=0;i<n;i++){
        S+=x[i];
        k++;
    }
    return S/k;
        }
        double gum(){
            double m=mij(); double D=0;
    for(int i=0;i<n;i++)
        if(x[i]>m)
            D+=x[i];
    return D;
        }
};

int main(){
     int nn, i;
    double xx[10];
    do cin>>nn;
    while (nn<1  || nn>10);
        for(i=0;i<nn;i++)
        cin>>xx[i];
    pear obj(nn,xx);
    double gumar = obj.gum();
        cout<<"gumar"<<" "<<gumar;
    return 0;
}
