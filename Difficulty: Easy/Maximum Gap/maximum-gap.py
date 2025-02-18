#User function Template for python3
class Solution:
	def maxSortedAdjacentDiff(self,arr):
    # code here
        arr.sort()
        max_diff=0
        for x in range(len(arr)-1):
            diff=arr[x+1]-arr[x]
            if diff>max_diff:
                max_diff=max(max_diff,diff)
        return max_diff


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    tc = int(input())
    while tc > 0:
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.maxSortedAdjacentDiff(arr)
        print(ans)
        tc = tc - 1
        print("~")
# } Driver Code Ends