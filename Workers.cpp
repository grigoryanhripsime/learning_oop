#include <iostream>
#include <string>
using namespace std;

struct ashxatakic{
    string name;
    string surname;
    int cout_of_babies;
};
class das{
    private:
        ashxatakic *x, y[10];
        int n, m;
    public:
        das(int n1, ashxatakic *x1){
            n = n1;
            x = x1;
        }
        ~das(){}
        void nor(){
            m = 0;
            for (int i = 0; i < n; i++)
                if (x[i].cout_of_babies > 0){
                    y[m] = x[i];
                    m++;
                }
        }
        void elq(){
            for (int i = 0; i < m; i++)
                cout<<y[i].name<<" "<<y[i].surname<<" "<<y[i].cout_of_babies<<endl;
        }
};

int main(){
    int n;
    ashxatakic x[10];
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>x[i].name>>x[i].surname>>x[i].cout_of_babies;
    }
    das ob(n, x);
    ob.nor();
    ob.elq();
    return 0;
}
