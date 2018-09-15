#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int longth;
    int num;

    int sum1 = -1;
    int sum2;
    int star = 0;
    int end = 0;

    cin >> longth;
    int *arr = new int[longth];

    for(int i = 0; i <= longth - 1; i++){
        cin >> num;
        arr[i] = num;
    }

    for(int i = 0; i <= longth - 1; i++){
        for(int j = i; j <= longth - 1; j++){
            sum2 = 0;
            for(int k = i; k <= j; k++){
                sum2 += arr[k];
            }
            if(sum2 > sum1){
                sum1 = sum2;
                star = i;
                end = j;
            }
        }
    }

    if (sum1 == -1) {
        cout << "0" << " " << arr[0] <<" "<< arr[longth-1] ;
    }
    else{
        cout << sum1 << " " << arr[star] << " " << arr[end] ;
    }

    return 0;
}
