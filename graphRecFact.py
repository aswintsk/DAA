import matplotlib.pyplot as plt

sizes = [1000, 2000, 3000, 4000, 5000]

times = [0.000022, 0.000046, 0.000050, 0.000103, 0.000129]

plt.plot(sizes, times, marker='o')

plt.title('Time taken to find factorial(Recursive) vs Value  n')

plt.xlabel('Value (n)')

plt.ylabel('Time Taken (seconds)')

plt.grid(True)

plt.show()
