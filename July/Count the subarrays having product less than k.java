class Solution {    
    public int countSubArrayProductLessThanK(long a[], int n, long k)
    {
        int i =0;
        int count = 0;
        while(i<n)
        {
            if(a[i] < k)
            {
                count++;
            }
            
            long product = a[i];
            int j = i+1;
            while(j<n && product < k)
            {
                product = product*a[j];
                if(product < k)
                {
                    count++;
                    j++;
                }
                
            }
            i++;
            
        }
        return count;
        
    }
}
