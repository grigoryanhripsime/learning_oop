#include <iostream>
#include <string>
using namespace std;

struct usanox {
            string anun;
            string azganun;
            double gnahatakan;
        };
class student {
    private:
        usanox x[30];
        int n;
    public:
        student() {
            cin>>n;
            for (int i = 0; i < n; i++)
                cin>>x[i].anun>>x[i].azganun>>x[i].gnahatakan;
        }
        ~student() {
            cout<<" ";
        }
        double mijin(){
            double s = 0;
            int q = 0;
            for (int i = 0; i < n; i++){
                s += x[i].gnahatakan;
                q++;
            }
            return s / q;
        }
        void lav_sovorox(){
            double m = mijin();
            for (int i = 0; i < n; i++)
                if (x[i].gnahatakan > m)
                    cout<<x[i].anun<<" "<<x[i].azganun<<endl;
        }
};
int main(){
    student obj;
    double m = obj.mijin();
    cout<<"mijin gnahatakan: "<<m<<endl;
    obj.lav_sovorox();
    return 0;
}
