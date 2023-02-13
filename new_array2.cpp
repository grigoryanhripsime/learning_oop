#include <iostream>
#include <string>
using namespace std;

class arrays {
    private:
        double *p1, *p2;
        double x[10];
        int n;
    public:
        arrays(double *, double *, int);
        ~arrays();
        void nor();
        void elq();
};

arrays::arrays(double *p11, double *p21, int n1) {
    p1 = p11;
    p2 = p21;
    n = n1;
}

arrays::~arrays() {
    cout<<" ";
}

void arrays::nor() {
    for (int i = 0; i < n; i++)
        x[i] = p1[i] - p2[i];
}

void arrays::elq() {
    cout<<"New array: ";
    for (int i = 0; i < n; i++)
        cout<<x[i]<<" ";
}

int main() {
    int n, i;
    do {
        cout<<"n = ";
        cin>>n;
    } while (n <= 0);
    double *p1, *p2;
    p1 = new double[n];
    if (p1 == NULL)
        exit(1);
    cout<<"First array: ";
    for (i = 0; i < n; i++)
        cin>>p1[i];
    p2 = new double[n];
    if (p2 == NULL)
        exit(1);
    cout<<"Second array: ";
    for (i = 0; i < n; i++)
        cin>>p2[i];
    arrays obj(p1, p2, n);
    obj.nor();
    obj.elq();
    return 0;
}
