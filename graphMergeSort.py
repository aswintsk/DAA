import matplotlib.pyplot as plt

sizes = [100, 200, 300, 400, 500]

times = [0.000010, 0.000016, 0.000032, 0.000039, 0.000051]

plt.plot(sizes, times, marker='o')

plt.title('Time taken to Sort using Merge Sort vs Sizee  n')

plt.xlabel('Size (n)')

plt.ylabel('Time Taken (seconds)')

plt.grid(True)

plt.show()
