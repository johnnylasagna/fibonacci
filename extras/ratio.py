from decimal import Decimal, getcontext

# Set precision high enough for Fibonacci ratios
getcontext().prec = 100

with open("fib.txt") as f:
    lines = [Decimal(line.strip()) for line in f if line.strip()]

ratios = []
for i in range(1, len(lines)):
    ratio = lines[i] / lines[i - 1]
    ratios.append(ratio)

for r in ratios:
    print(r)