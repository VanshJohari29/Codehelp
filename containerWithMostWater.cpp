class Solution {
public:
int maxArea(vector<int>& height) {
    int ans= 0;
      int n= height.size();
      int i=0, j=n-1;
    
        while(i<j){
          int amount= min(height[i],height[j]) * (j-i);
          ans= max(ans,amount);
        
          if(height[i]<=height[j])
              i++;
          else 
              j--;
        }
       return ans;
}
};
// First make two pointers i and j 
//while i is less than j we will store the amount as minimum of array of i an dj length multiplied by i-j
//then we will store ans in max of ans and amount and if height[i ]is still less than we will move i pointer else we will decrease j--
