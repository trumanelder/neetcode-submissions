class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int currentGreatest = 0;
        int lastValue = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        for(int i=arr.size()-2;i>=0;i--){
            if(lastValue > currentGreatest) currentGreatest = lastValue;
            lastValue = arr[i];
            arr[i] = currentGreatest;
        }
        return arr;
    }
};