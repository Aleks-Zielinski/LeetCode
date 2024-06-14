#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0){
            return 0;
        }
        if(x == -1 && n % 2 == 1){
            return -1;
        }
        if(n == 0 || x == 1 || x == -1){
            return 1;
        }
        if(n < 0){
            n = abs(n); // <- using cmath for it felt like cheating
            x = 1 / x;
        }
        while(n % 2 == 0){
            n = n / 2;
            x *= x;
        } // could do if not % 2 == 0 then do once x *= x -> (n--) and then again while loop
        double y = x;
        for(int i = 0; i < n - 1; i++){
            x *= y;
        }
        return x;
    }
};

int main(){
    Solution solution;
    cout<<solution.myPow(2, 10);
    return 0;
}