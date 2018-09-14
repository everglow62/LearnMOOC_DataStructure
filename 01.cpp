#include<iostream>
#include<cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int longth;
    int num;
    int sum1;
    int sum2;

    cin >> longth;
    int *arr = new int[longth];
      
    for(int i = 0; i < longth - 1; i++)
    {
        cin >> num;
        arr[i] = num;
    }

    sum1 = arr[0];
    
    for(int i = 0; i <= longth-1; i++)
    {
        for(int j = i; j <= longth-1; j++)
        {
            sum2 = 0;
            for(int k = i; k <= j; k++){
                sum2 += arr[k];
            }
            if( sum2 > sum1) {
                sum1 = sum2;
            }
                
        }
    }

    if(sum1 > 0) {
        cout << sum1 << "\n";
    }
    else{
        cout << "0" << "\n";
    }
    

    return 0;
}
