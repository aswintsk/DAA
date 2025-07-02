import matplotlib.pyplot as plt

sizes = [1000, 2000, 3000, 4000, 5000]

times = [0.000007, 0.000007, 0.000005, 0.000005, 0.000007]

plt.plot(sizes, times, marker='o')

plt.title('Time taken to find array uniqueness vs Array Size n')

plt.xlabel('Array Size (N)')

plt.ylabel('Time Taken (seconds)')

plt.grid(True)

plt.show()
