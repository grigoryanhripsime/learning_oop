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





// #include <iostream>
// using namespace std;

// class arrays {
//     protected:
//         double *x, *y, z[10]; int n;
//     public:
//         arrays(int n2, double *x2, double *y2){
//             n=n2; x=x2; y=y2;
           
//         }
//         ~arrays(){
//             cout<<"Destructor";
//         }
//         void stexcel(){
//             for (int i = 0; i < n; i++) {
//                 z[i] = x[i] / y[i];
//             }
//         }
//         void tpel(){
//             for (int i = 0; i < n; i++)
//                 cout<<z[i]<<" ";
//             cout<<endl;
//         }
// };

// int main(){
//     double x1[10],y1[10]; int n1;
    
//     do cin>>n1; while (n1<1 ||n1>10);
//             for (int i = 0; i < n1; i++)
//                 cin>>x1[i];
//             for (int i = 0; i < n1; i++)
//                 cin>>y1[i];
    
    
//     arrays ob(n1,x1,y1);
//     ob.stexcel();
//     ob.tpel();
//     return 0;
// }
