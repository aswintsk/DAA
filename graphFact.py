import matplotlib.pyplot as plt

sizes = [1000, 2000, 3000, 4000, 5000]

times = [0.000014, 0.000007, 0.000006, 0.000014, 0.000017]

plt.plot(sizes, times, marker='o')

plt.title('Time taken to find factorial vs Value  n')

plt.xlabel('Value (n)')

plt.ylabel('Time Taken (seconds)')

plt.grid(True)

plt.show()
