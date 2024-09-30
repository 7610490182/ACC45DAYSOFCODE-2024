#include<iostream>
#include<map>
#include<string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> m = {
            {'I', 1}, {'V', 5}, {'X', 10}, 
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int size = s.length();
        int sum = 0;

        for (int i = 0; i < size; i++){
            if (i < size - 1 && m[s[i]] < m[s[i + 1]]) {
                sum -= m[s[i]];
            } else {
                sum += m[s[i]];
            }
        }
        return sum;
    }
};

int main(){

    return 0;
}