class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> record;
        
        for(int i = 0; i < ops.size(); i++) {
            
            int n = record.size();
            
            if(ops[i][0] >= 48 && ops[i][0] <= 57) {
                record.push_back(stoi(ops[i]));
            } 
            else if(ops[i][0] == '-') {
                record.push_back(-stoi(ops[i].substr(1)));
            }
            else if(ops[i][0] == 'C') {
                record.pop_back();
            }
            else if(ops[i][0] == 'D') {
                record.push_back(record[n - 1]*2);
            }
            else {
                int m = record[n - 1] + record[n - 2];
                record.push_back(m);
            }
            
        }
        
        int sum = 0;
        for(int i = 0; i < record.size(); i++) {
            cout<<record[i]<<" ";
            sum += record[i];
        }
        
        return sum;
    }
};