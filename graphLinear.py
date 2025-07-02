import matplotlib.pyplot as plt

sizes = [100, 200, 300, 400, 500]

times = [0.000002, 0.000004, 0.000003, 0.000003, 0.000004]

plt.plot(sizes, times, marker='o')

plt.title('Linear Search Time Taken vs Array Size n')

plt.xlabel('Array Size (N)')

plt.ylabel('Time Taken (seconds)')

plt.grid(True)

plt.show()
