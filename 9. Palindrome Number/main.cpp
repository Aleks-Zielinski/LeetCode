#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int count(int x){
    int y = x;
    int i;
    if(x < 10){
        return 1;
    }
    for(int j = 1; j > 0; j++){
        y = y / 10;
        if(y < 10){
            j = j + 1;
            i = j;
            break;
        }
    }
    return i;
}

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        if(x < 10){
            return true;
        }
        int i = count(x);
        vector<int> array;
        array.push_back(x/pow(10,i - 1));
        for(int k = 0; k < i - 1; k++){
            int f = x/pow(10, i - k - 1); // Get old first number
            int c = x - f*pow(10, i - k - 1); // Cut first number
            int cc = count(c);
            int n = c / pow(10, cc - 1); // Get new first number
            if(count(f) + cc == i){
                array.push_back(n); // Add new first number
            }
            else{
                array.push_back(0);
            }
            //cout<<f<<" "<<c<<" "<<n<<"\n";
        }
        int s = array.size();
        for(int k = 0; k < s; k++){
            if(array[k] != array[s - 1 - k]){
                return false;
            }
            if(k >= s - k){
                return true;
            }
        }
        return true;
    }
};

int main(){
    Solution test;
    cout<<test.isPalindrome(1001);
    return 0;
}