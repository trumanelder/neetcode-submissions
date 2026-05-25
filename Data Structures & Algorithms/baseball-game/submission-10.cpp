#include <cctype>

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int sum = 0;
        for(int i=0;i<operations.size();i++){
            char c = operations[i].front();
            if(isdigit(c) || c == '-'){
                record.push_back(stoi(operations[i]));
                sum += record.back();
            }
            if(c == '+'){
                record.push_back(record.back() + record[record.size()-2]);
                sum += record.back();
            }
            if(c == 'D'){
                record.push_back(record.back() * 2);
                sum += record.back();
            }
            if(c == 'C'){
                sum -= record.back();
                record.pop_back();
            }
        }
        return sum;
    }
};