#include<iostream>
#include<vector>
using namespace std;

void spiralOrder(vector<vector<int>>& matrix) {
        int top= 0, left= 0;
        int down= matrix.size()-1;
        int right= matrix[0].size()-1;
        vector <int> ans;
        int dir=0;
        while(top<=down && left<=right){
            if(dir==0){
                for(int i= left; i<=right;i++)
                   ans.push_back(matrix[top][i]);
                top++;
            }
            else if(dir==1){
                for(int i= top; i<=down;i++)
                     ans.push_back(matrix[i][right]);
                right--;
            }
            else if(dir==2){
                for(int i=right; i>=left;i--)
                    ans.push_back(matrix[down][i]);
                down--;
            }
            else if(dir==3){
                for(int i=down;i>=top;i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
            dir = (dir+1)%4;

        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<"->";
        }
    } 

int main()
{
    vector<vector<int>> matrix;
    // matrix= [[1,2,3],[4,5,6],[7,8,9]];
    matrix.push_back({1, 2, 3,4});
    matrix.push_back({5, 6, 7, 8});
    matrix.push_back({9, 10, 11, 12});
    matrix.push_back({13, 14, 15, 16});
    spiralOrder(matrix);
    return 0;
}