#include <iostream>
using namespace std;

class arrays {
    protected:
        int *x, *y, z[10], n;
    public:
        arrays(){
            int x1[10], y1[10];
            x = x1;
            y = y1;
            cin>>n;
            for (int i = 0; i < n; i++)
                cin>>x1[i];
            for (int i = 0; i < n; i++)
                cin>>y1[i];
            
        }
        ~arrays(){
            cout<<"Destructor";
        }
        void stexcel(){
            for (int i = 0; i < n; i++) {
                z[i] = x[i] - y[i];
            }
        }
        void tpel(){
            for (int i = 0; i < n; i++)
                cout<<z[i]<<" ";
            cout<<endl;
        }
};

int main(){
    arrays ob;
    ob.stexcel();
    ob.tpel();
    return 0;
}

