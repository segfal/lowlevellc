#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>


using namespace std;


bool containsDuplicate(vector<int>& nums){
    unordered_set<int> s;
    for(int i=0; i< nums.size(); i++){
        if(s.find(nums[i]) != s.end()){
            return true;
        }
        s.insert(nums[i]);

    }
    return false;
}



//using hash set
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;
    for(int i=0; i< nums.size(); i++){
        if(s.find(nums[i]) != s.end()){
            return true;
        }
        s.insert(nums[i]);

    }
    return false;
}