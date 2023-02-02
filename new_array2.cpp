#include <iostream>
using namespace std;

class arrays {
    private:
        double *x, *y, z[20];
        int n;
    public:
        arrays(double *x1, double *y1, int n1);
        ~arrays();
        void nor();
        void elq();
};
arrays::arrays(double *x1, double *y1, int n1){
    x = x1;
    y = y1;
    n = n1;
}
arrays::~arrays(){
    delete []x;
    delete []y;
}
void arrays::nor(){
    for (int i = 0; i < n; i++)
        z[i] = x[i] - y[i];
}
void arrays::elq(){
    for (int i = 0; i < n; i++)
        cout<<z[i]<<" ";
}
int main(){
    int n, i;
    do cin>>n; while(n < 1);
    double *x = new double[n];
    double *y = new double[n];
    for (i = 0; i < n; i++)
        cin>>x[i];
    for (i = 0; i < n; i++)
        cin>>y[i];
    arrays ob(x, y, n);
    ob.nor();
    ob.elq();
    return 0;
}

