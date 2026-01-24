//find the Two Sum problem in the array
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> ans ;

        for(int i = 0 ; i< nums.size() ; i++){
            int first = nums[i];
            int second = target - first;
            if(map.find(second) != map.end()){
                ans.push_back(i);
                ans.push_back(map[second]);
                break;


            }
            map[first] = i;
        }
        return ans ;
    }
};


//find the three sum problem in the array
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>>set;
        int n = nums.size();
        for(int i = 0 ; i< n ; i++){
            for( int j = i+1 ; j < n ; j++){
                for( int k = j+1 ; k < n ; k++){
                    if( nums[i] + nums[j] + nums[k] == 0){
                        vector<int> triplet = { nums[i] , nums[j] , nums[k]};
                        sort(triplet.begin() , triplet.end());

                       if( set.find(triplet) == set.end() ){
                         set.insert(triplet);
                         ans.push_back(triplet);
                       }
                    }
                }
            }
        }
        return ans;
    }
    
};


//write the four sum oprimezed solution
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        set<vector<int>> st;

        int n = nums.size();

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                for(int k = j+1; k < n; k++){
                    for(int l = k+1; l < n; l++){
                        if((long long)nums[i] + nums[j] + nums[k] + nums[l] == target){

                            vector<int> four = {nums[i], nums[j], nums[k], nums[l]};
                            sort(four.begin(), four.end());

                            if(st.find(four) == st.end()){
                                st.insert(four);
                                ans.push_back(four);
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};




//SubArray Sum equal to k
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int i = 0 ; i< n ; i++){
            int currSum = 0;
            for(int j = i ; j < n ; j++){
                currSum += nums[j];
                if( currSum == k){
                    count ++;
                } 
            }
        }
        return count;
        
    }
};



//Binary Search 
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int st = 0;
        int end = arr.size() -1;
        while( st <= end ){
            int mid = ( st +end )/ 2;
            if( target > arr[mid]){
                st = mid +1; 
            }else if(target < arr[mid]){
                end = mid -1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};

