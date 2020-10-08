#include <iostream>

using namespace std;

int main() {
    int step, height;

    cin >> height;
    cin >> step;

    step = height - step;
    for(int i=1; i<=height; i++) {
        if (step!=0) {
            for(int j=height; j>i; j--) {
                cout << " ";
            }
        }else {
            for(int j=height-1; j>i; j--) {
                cout << " ";
            }
            cout << "m";
        }
        for(int j=0; j < i;j++) {
            cout << "#";
        }
        step--;
        cout << endl;
    }
    return 0;
}
