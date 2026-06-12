class Solution {
public:
vector<int> getAlternates(vector<int> &arr) {
// code here
vector<int> res;
for (int i = 0; i < arr.size(); i++) {
if (i % 2 == 0) res.push_back(arr[i]);
}
return res;
}
};
