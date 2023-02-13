#include <iostream>
#include <string>
using namespace std;

struct usanox{
    string azganun;
    int miavor;
    int tariq;
};
class das{
    private:
        usanox *p, x[10];
        int n;
    public:
        das(int n1){
            n = n1;
            p = new usanox[n]; 
            if (p == NULL) return;
            for (int i = 0; i < n; i++)
                cin>>p[i].azganun>>p[i].miavor>>p[i].tariq;
        }
        ~das(){
            delete [] p;
            p = 0;
        }
        void elq(int m){
            for (int i = 0; i < m; i++)
                cout<<x[i].azganun<<" "<<x[i].miavor<<" "<<x[i].tariq<<endl;
        }
        friend void nor(das &, int &);
};

void nor(das &ob, int &m){
    m = 0;
    for (int i = 0; i < ob.n; i++)
        if (ob.p[i].miavor < 8) {
            ob.x[m] = ob.p[i];
            m++;
        }
}
int main(){
    int n;
    do cin>>n; while(n <= 0);
    das ob(n);
    int m;
    nor(ob, m);
    cout<<m<<endl;
    ob.elq(m);
    return 0;
}
