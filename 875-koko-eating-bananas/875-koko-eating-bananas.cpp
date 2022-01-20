class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int size = piles.size();
        float sum = 0;
        for (int pile: piles)
            sum += pile;
        int left = ceil(sum / h);
        
        int right = 1;
        for(int pile : piles) {
            right = max(pile, right);
        }
        
        while (left < right) {
            int middle = (left + right) / 2;
            int hourSpent = 0;
            
            for(int pile: piles) {
                hourSpent += ceil((double) pile/middle);
            }
            
            if(hourSpent <= h)
                right = middle;
            else
                left = middle + 1;
        }
        return right;
        
        /*
        int size = piles.size();
        if (h == size)
        {
            sort(piles.begin(), piles.end());
            return piles[size - 1];
        }

        else if (h > size)
        {

            float sum = 0;
            for (int i = 0; i < size; i++)
                sum += piles[i];
            float avg = ceil(sum / h);
            int time;
            do
            {
                time = 0;
                for (int i = 0; i < size; i++)
                {
                    if (piles[i] > avg)
                        time += ceil(piles[i] / avg);
                    else
                        time++;
                }
                if (time <= h)
                {
                    return avg;
                }
                avg++;
            } while (time > h);
        }
        return 0;
        */
    }
};