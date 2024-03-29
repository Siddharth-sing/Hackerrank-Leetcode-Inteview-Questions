class Solution:
    def maxArea(self, height: List[int]) -> int:
        j = len(height)-1
        i = 0
        maxArea = 0
        while i<j:
            area = min(height[i],height[j])*abs(i-j)
            maxArea = max(area,maxArea)
            if height[i]>height[j]:
                j-=1
            else:
                i+=1

        return maxArea
