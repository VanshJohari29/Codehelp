class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        //area = the absolute value of Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By) divided by 2
        float area = abs((float)(points[0][0]*(points[1][1]-points[2][1])) +
            (float)(points[1][0]*(points[2][1]-points[0][1])) +
            (float)(points[2][0]*(points[0][1]-points[1][1])))/2;
        if(area > 0)
        return true;
        return false;
    }
};
