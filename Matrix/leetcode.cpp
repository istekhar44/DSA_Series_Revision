// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& mat) {
//         int m = mat.size() ; //row 
//         int n = mat[0].size(); //col
//         int strow =0 , stcol =0 , endrow = m-1 , endcol = n-1;
//         vector<int>ans;

//         while( strow <= endrow && stcol <= endcol){
//             //top
//             for(int j = stcol ; j<= endcol ; j++){
//                 ans.push_back(mat[strow][j]);
//             } 

//             //right
//             for(int i = strow +1 ; i<=strow ; i++){
//                 ans.push_back(mat[i][endcol];)
//             }

//             //bottom
//             for(int j = endcol-1 ; j <=endrow ; j++){
//                 ans.push_back(mat[strow][j]);
//             }

//             //left
//             for(int i = endrow-1 ; i >= stcol+1 ; i++){
//                 ans.push_back(mati][scol]);
//             }

//             strow++ ,stcol++;
//             endrow--,endcol--;


//         }
//     }
// };


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size();        // rows
        int n = mat[0].size();     // cols

        int strow = 0, stcol = 0;
        int endrow = m - 1, endcol = n - 1;

        vector<int> ans;

        while (strow <= endrow && stcol <= endcol) {

            // 1️⃣ Top row
            for (int j = stcol; j <= endcol; j++) {
                ans.push_back(mat[strow][j]);
            }

            // 2️⃣ Right column
            for (int i = strow + 1; i <= endrow; i++) {
                ans.push_back(mat[i][endcol]);
            }

            // 3️⃣ Bottom row (only if different row)
            if (strow < endrow) {
                for (int j = endcol - 1; j >= stcol; j--) {
                    ans.push_back(mat[endrow][j]);
                }
            }

            // 4️⃣ Left column (only if different column)
            if (stcol < endcol) {
                for (int i = endrow - 1; i > strow; i--) {
                    ans.push_back(mat[i][stcol]);
                }
            }

            strow++;
            stcol++;
            endrow--;
            endcol--;
        }

        return ans;
    }
};
