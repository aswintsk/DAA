import matplotlib.pyplot as plt

sizes = [10, 15, 20, 25, 30]

times = [0.006, 0.023, 0.049, 0.089, 0.181]

plt.plot(sizes, times, marker='o')

plt.title('Matrix Multiplication Time vs Matrix Size')

plt.xlabel('Matrix Size (N*N)')

plt.ylabel('Time Taken (seconds)')

plt.grid(True)

plt.show()
