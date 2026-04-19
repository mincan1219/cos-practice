#include <iostream>
using namespace std;

int check_validity(int a, int b) {
    if(b > a){
        return 1;
    }else{
        return 0;
    }
}
 
int sum_up(int a, int b) {
    int c = 0;
    for(int i = a;i<=b;i++){
        c += i;
    }
    cout << "Sum: " << c << endl;
    return 0;
}

int main(int argc, char *argv[])
{
    int a, b;
    cout << "First number: " << endl;
    cin >> a;
    cout << "Second number: " << endl;
    cin >> b;

    if(check_validity(a, b) == 1){
        sum_up(a, b);
    }else{
        return 0;
    }
}
