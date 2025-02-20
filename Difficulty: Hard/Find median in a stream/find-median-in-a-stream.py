
import heapq

class Solution:
    def getMedian(self, arr):
        maxHeap = []  # Max heap (store negative values for Python's min heap)
        minHeap = []  # Min heap
        result = []
        
        for num in arr:
            # Insert into maxHeap first
            heapq.heappush(maxHeap, -num)

            # Balance heaps: Ensure maxHeap top <= minHeap top
            if maxHeap and minHeap and (-maxHeap[0] > minHeap[0]):
                heapq.heappush(minHeap, -heapq.heappop(maxHeap))
            
            # Maintain size property (maxHeap can have at most 1 extra element)
            if len(maxHeap) > len(minHeap) + 1:
                heapq.heappush(minHeap, -heapq.heappop(maxHeap))
            elif len(minHeap) > len(maxHeap):
                heapq.heappush(maxHeap, -heapq.heappop(minHeap))

            # Compute median
            if len(maxHeap) > len(minHeap):
                result.append(float(-maxHeap[0]))
            else:
                result.append((-maxHeap[0] + minHeap[0]) / 2.0)

        return result

#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():
    t = int(input().strip())
    for _ in range(t):
        s = input().strip()
        nums = list(map(int, s.split()))
        ob = Solution()
        ans = ob.getMedian(nums)
        print(" ".join(f"{x:.1f}" for x in ans))


if __name__ == "__main__":
    main()

# } Driver Code Ends