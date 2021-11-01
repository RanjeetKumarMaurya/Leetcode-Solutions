class Solution {
public:
    int merge(int low,int mid,int high,vector<int>& a)
    {
        int count=0;
        int j=mid+1;
        for(int i=low;i<=mid;i++)
        {
            while(j<=high && a[i]>(long long)2*a[j])
            {
                j++;
            }
            count+=(j-(mid+1));
        }
        vector<int> temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high)
        {
            if(a[left]<=a[right])
            {
                temp.push_back(a[left++]);
            }
            else
            {
                temp.push_back(a[right++]);
            }
        }
        while(left<=mid)
        {
            temp.push_back(a[left++]);
        }
        while(right<=high)
        {
            temp.push_back(a[right++]);
        }
        for(int i=low;i<=high;i++)
        {
            a[i]=temp[i-low];
        }
        return count;
    }
    int mergeSort(int low,int high,vector<int>& a)
    {
        if(low>=high)
        {
            return 0;
        }
        int mid=(low+high)/2;
        int count=mergeSort(low,mid,a);
        count+=mergeSort(mid+1,high,a);
        count+=merge(low,mid,high,a);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(0, nums.size()-1, nums);
    }
};