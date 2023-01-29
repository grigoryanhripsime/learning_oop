#include <iostream>
using namespace std;

class array {
    private:
        int *x;
        int y[10], n;
    public:
        array(int n1, int *x1) {
            n = n1;
            x = x1;
        }
        ~array(){}
        int min(){
            int min = x[0];
            for (int i = 0; i < n; i++)
                if (x[i] < min) 
                    min = x[i];
            return min;
        }
        void nor() {
            int m = min();
            for (int i = 0; i < n; i++)
                y[i] = x[i] + m;
        }
        void elq(){
            for (int i = 0; i < n; i++)
                cout<<y[i]<<" ";
        }
};
int main(){
    int n, x[10];
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>x[i];
    array ob(n, x);
    int m = ob.min();
    cout<<"m = "<<m<<endl;
    ob.nor();
    ob.elq();
    return 0;
}
