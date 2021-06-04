class Solution:

    def aux(self, weights, i, l, r):
        if i == len(weights):
            return
        if l == r:
            print(l, r)
            self.answer.add(2 * l)
        self.aux(weights, i + 1, l + weights[i], r)
        self.aux(weights, i + 1, l, r + weights[i])

    def barbells(self, weights, bars):

        self.answer = set()
        weights.sort()
        self.aux(weights, 0, 0, 0)
        answer = set()
        # print(self.answer)
        for bar in bars:
            for w in self.answer:
                answer.add(bar + w)
        answer = list(answer)
        answer.sort()
        for a in answer:
            # print(a)
            pass


n, m = map(int, input().split())
bars = list(map(int, input().split()))
weights = list(map(int, input().split()))

Solution().barbells(weights, bars)
