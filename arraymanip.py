size, numOps = map(int, input().split())
manipArray = [0] * size

for x in range(numOps):
    start, end, value = map(int, input().split())
    manipArray[start-1] += value
    manipArray[end-1] += -value

currentVal = 0
maxVal = 0

for i in range(size):
    currentVal += manipArray[i]
    maxVal = max(currentVal, maxVal)

print(maxVal)
