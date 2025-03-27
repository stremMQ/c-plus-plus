class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int pl{n*n};
        while(pl * w > maxWeight)
        {
            pl--;
        }
        return pl;
    }
};