#include <iostream>
using namespace std;

class tver {
    private:
        int a, b, c;
    public:
        tver() {
            cin>>a>>b>>c;
        }
        ~tver() {
            cout<<"";
        }
        void changing(int x, int y, int z) {
            a = x;
            b = y;
            c = z;
        }
        int mec() {
            int max = a;
            if (b > max) max = b;
            if (c > max) max = c;
            return max;
        }
};

int main() {
    tver obj;
    int x, y, z;
    cin>>x>>y>>z;
    obj.changing(x, y, z);
    int max = obj.mec();
    cout<<max;
    return 0;
}
