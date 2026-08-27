class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int] 
        :type target: int
        :rtype: List[int]
        """
        # find the first occurence
        start = 0
        end = len(nums) - 1
        firstOccurence = -1

        while start <= end:
            mid = start + (end - start) // 2

            if nums[mid] == target:
                firstOccurence = mid
                end = mid - 1

            elif nums[mid] < target:
                start = mid + 1
            
            else:
                end = mid - 1


        # find the last occurence
        start = 0
        end = len(nums) - 1
        lastOccurence = -1

        while start <= end:
            mid = start + (end - start) // 2

            if nums[mid] == target:
                lastOccurence = mid
                start = mid + 1

            elif nums[mid] < target:
                start = mid + 1
            
            else:
                end = mid - 1

        return [firstOccurence, lastOccurence]