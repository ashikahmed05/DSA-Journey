// Last updated: 11/9/2025, 7:30:59 PM
class Solution {
public:
// Here i am using  binary search meyhod with TC O(n*logmax(p))
    int minEatingSpeed(vector<int>& piles, int h) {
        long long maxx = 0;
        long long sum = 0;
        for (long long p : piles){
            maxx = max(p, maxx);
            sum += p;
        }
        long long l = (sum + h - 1)/h;
        long long r = maxx;
        long long answer = 1e9;

        while (r >= l){
            long long mid = l + (r-l)/2;
            long long ch = 0;
            for (long long i = 0; i < piles.size(); i++){
                ch += piles[i]/mid;
                if (piles[i] % mid != 0) ch++;
                if (ch > h) break;
                
            }
            if (ch > h){
                l = mid + 1;                
            } else if (ch <= h){
                r = mid - 1;
                answer = min(mid, answer);
            } 
            
            


        }

        return (int)answer;
        
    }
};