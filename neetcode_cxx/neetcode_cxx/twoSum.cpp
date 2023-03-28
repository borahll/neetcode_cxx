//
//  twoSum.cpp
//  neetcode_cxx
//
//  Created by Bora Haliloglu on 28.03.2023.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    vector<int> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (m.find(complement) != m.end()) {
            result.push_back(m[complement]);
            result.push_back(i);
            break;
        } else {
            m.insert({nums[i], i});
        }
    }
    
    return result;
}
