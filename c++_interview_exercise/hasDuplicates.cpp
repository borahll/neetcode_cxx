//
// Created by bhll on 3/27/23.
//
#include <vector>
#include <set>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    set<int> n;
    for(int num : nums){
        if(n.find(num) != n.end()){
            return true;
        }
        n.insert(num);
    }
    return false;
}
