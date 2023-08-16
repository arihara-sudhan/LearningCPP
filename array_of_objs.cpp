#include <iostream>
using namespace std;

class mine {
public:
    int a;
    int get() {
        return a;
    }
};

int main() {
    mine o[3];
    o[0].a = 0;
    o[1].a = 1;
    o[2].a = 2;
    
    for (int i = 0; i < 3; i++) {
        cout << o[i].get() << endl;
    }
    
    return 0;
}
