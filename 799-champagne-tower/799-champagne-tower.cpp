class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {

        vector<vector<double> > pyramid(102,vector<double>(102)); // 102 as contraints

        pyramid[0][0]= (double)(poured); // consider total liquied filled in first glass"

        for(int row=0;row<=query_row;++row)
        {
            for(int glass=0;glass<=row;++glass) // <=row as each row has no. of glasses=no. of rows
            {
                double partialPoured=(pyramid[row][glass]-1.0)/2.0; // doing -1.0 as current glass can hold max 1, and /2 as each time excess liquid spills in 2 direction left & right

                if(partialPoured>0)
                {
                    pyramid[row+1][glass] += partialPoured;
                    pyramid[row+1][glass+1] += partialPoured;
                }
            }
        }
        double glassFull=min(1.0,pyramid[query_row][query_glass]); // As we are diving huge chuk of liquid ,  value can be >1 in glass hence return 1 if value>1 (i.e min value)
        return glassFull;
    }
};