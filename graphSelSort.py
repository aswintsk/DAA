import matplotlib.pyplot as plt

sizes = [100, 200, 300, 400, 500]

times = [0.000008, 0.000029, 0.000049, 0.000066, 0.000095]

plt.plot(sizes, times, marker='o')

plt.title('Time taken to Sort using Selection Sort vs Sizee  n')

plt.xlabel('Size (n)')

plt.ylabel('Time Taken (seconds)')

plt.grid(True)

plt.show()
