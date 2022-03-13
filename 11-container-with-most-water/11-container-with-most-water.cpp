class Solution {
public:
    int maxArea(vector<int>& height) {
        //vector<int> ree;
        //if(height.size()==2)
          //  return height[0]*height[1];
        /*int ree=0;
        for(int i=0;i<height.size();i++)
        {
            for(int j=i+1;j<height.size();j++)
            {
                //int minn=min(height[i],height[j]);
                //int pro=minn*(i-j);
                //ree.push_back(pro);
                ree=max(ree,min(height[i],height[j])*(j-i));
                //area = max(area, min(A[j], A[i]) * (j - i));
            }
        }
        //sort(ree.begin(),ree.end());
        //return ree[-1];
        return ree;*/
        /*int lwall=0;
        int rwall=height.size()-1;
        int ree=0;
        while(lwall<rwall)
        {
            ree=max(ree,min(height[lwall],height[rwall])*(rwall-lwall));
            if(height[lwall] > height[rwall])
                rwall--;
            else if (height[lwall] < height[rwall])
                lwall++;
            else// height[i] == height[j].
            {
                lwall++;
                rwall--;
            }
        }
        return ree;*/
        int i=0;
        int j=height.size()-1;
        int aree=0;
        while(i<j)
        {
            aree=max(aree,min(height[i],height[j])*(j-i));
            if(height[i]<height[j])
                i++;
            else if(height[j]<height[i])
                j--;
            else
            {
                i++;
                j--;
            }
        }
     return aree;   
    }
};