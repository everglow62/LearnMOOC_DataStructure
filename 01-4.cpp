#include <iostream> //二分法适用有序数组

using namespace std;

int main(){
    int a[8];
    for(int i = 0; i < 8; i++){
        cin >> a[i];
    }

    int num = 12;
    
    int mid = 4;
    
    int i = 9;
    
    while (i) {
        i--;
        if (num < a[mid]) {
            mid = mid / 2;
        }
        else if(num > a[mid]) {
            mid = (mid + 8)/2;
        }
        else{
            cout << mid << endl;
            break;
        }
    }
    cout << -1 << endl;
}



