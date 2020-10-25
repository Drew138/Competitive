class Solution:
    def max_rope_length(self, ropes, segments):
        i = 0
        j = max(ropes)
        while i < j:
            mid = (i+j)/2
            if self.get_segments(mid, ropes, segments):
                if i == mid:
                    break
                else:
                    i = mid
            else:
                if j == mid:
                    break
                else:
                    j = mid
        return (j + i)/2

    def get_segments(self, mid, ropes, segments):
        sol = 0
        for rope in ropes:
            sol += rope//mid
        return sol >= segments


print(Solution().max_rope_length([802, 743, 457, 539], 11))
