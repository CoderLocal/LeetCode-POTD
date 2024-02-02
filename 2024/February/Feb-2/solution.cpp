class Solution {
  public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> answer;
        int start = 12,add=11;
        int initial = start;
        while(start<low){
            if(start%10==9){
                start = initial*10+(initial%10+1);
                initial = start;
                add = add*10+1;
            }
            else{
                start += add;
            }
        }
        while(start<=high){
            if(start%10==9){
                answer.push_back(start);
                start = initial*10+(initial%10+1);
                initial = start;
                add = add*10+1;
            }
            else{
                answer.push_back(start);
                start += add;
             }
        }
        return answer;
    }
};
