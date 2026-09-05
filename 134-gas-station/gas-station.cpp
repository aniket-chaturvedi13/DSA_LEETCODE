class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        // Agr jitna tum kamate ho usse jyada kharch krte ho toh tum kabhi apne goal ko achieve nhi kr skte

        int totalKamai  = accumulate(begin(gas), end(gas), 0);
        int totalKharch = accumulate(begin(cost), end(cost), 0);

        if(totalKamai < totalKharch) 
            return -1;

        int n = gas.size();
        int total = 0, result_idx = 0;

        for(int i = 0; i < n; i++) {
            total += gas[i] - cost[i];

            if(total < 0) {
                total = 0;
                result_idx = i+1;
            }
        }

        return result_idx;

        
        
    }
};