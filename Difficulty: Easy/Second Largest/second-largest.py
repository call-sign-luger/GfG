#User function Template for python3
class Solution:
    def getSecondLargest(self, arr):
        # Code Here
        first,second=-1,-1
        for i in arr:
            if i>first:
                second=first
                first=i
            elif second<i<first:
                second=i
        return second

#{ 
 # Driver Code Starts
# Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        arr = list(map(int, input().split()))
        ob = Solution()
        ans = ob.getSecondLargest(arr)
        print(ans)
        print("~")
# } Driver Code Ends