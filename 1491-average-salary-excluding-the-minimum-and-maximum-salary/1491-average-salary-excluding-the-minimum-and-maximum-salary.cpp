class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        auto s = accumulate(std::next(salary.begin()), std::prev(salary.end()), 0);
        assert(salary.size() >= 3);
        return static_cast<double>(s)/static_cast<double>(salary.size()-2);
    }
};