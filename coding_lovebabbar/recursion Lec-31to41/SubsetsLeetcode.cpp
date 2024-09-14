#include <iostream>
#include <vector>
using namespace std;

void solve(const vector<int>& nums, vector<int> output, int index, vector<vector<int> >& ans) {
    // Base case
    if (index == nums.size()) {
        ans.push_back(output);
        return;
    }

    
    solve(nums, output, index + 1, ans);

    
    output.push_back(nums[index]);
    solve(nums, output, index + 1, ans);
}

int main() {
    vector<int> nums ; 
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    vector<vector<int> > ans;
    vector<int> output;
    int index = 0;

    solve(nums, output, index, ans);


    for(int i=0;i<ans.size();i++){
        cout<<" { ";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<" } ";
    }cout<<endl;
    

    return 0;
}
