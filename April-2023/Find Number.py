class Solution:
    def findNumber(self, N : int) -> int:
        # code here
        
        res_list = []
        
        odd_list = [1,3,5,7,9]
        
        remainder = 0
        quotient  = N
        res = 0
        tens = 1
        
        while quotient:
            remainder = quotient % 5
            quotient = quotient//5
            if remainder == 0:
                res_list.append(odd_list[4])
                quotient -= 1
                
            else: res_list.append(odd_list[remainder - 1])
        
        for i in res_list:
            res += i * tens
            tens *= 10
            
        return res
