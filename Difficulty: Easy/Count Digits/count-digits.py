#User function Template for python3

class Solution:
    def evenlyDivides(self, n):
        num = n
        count = 0
        while n:
            x = n%10
            if x:
                count = count + int(num%x==0)
            n = n//10
        return count
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())

        ob = Solution()
        print(ob.evenlyDivides(N))
        print("~")

# } Driver Code Ends