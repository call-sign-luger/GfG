#User function Template for python3
class Solution:
    def isVowel (ob,c):
        # code here
        return "YES" if c.lower() in {'a','e','i','o','u'} else "NO"


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        c=input()

        ob = Solution()
        print(ob.isVowel(c))
# } Driver Code Ends