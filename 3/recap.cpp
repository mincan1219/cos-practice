#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int x, y;
    int z = 0;
    cout << "First number: " << endl;
    cin >> x;
    cout << "Second number: " << endl;
    cin >> y;

    if(y > x){
        for(int i = x;i <= y;i++){
            z += i;
        }
        cout << "Sum: " << z << endl;
    }
    return 0;
}
