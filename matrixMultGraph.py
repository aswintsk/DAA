import matplotlib.pyplot as plt

sizes =[20,30,40,50,60]
times=[0.000024,0.000087,0.000202,0.000364,0.000628]

plt.plot(sizes,times,marker='o')
plt.title("matrix multiplication time vs matrix size")
plt.xlabel("Matrix Size (nxn)")
plt.ylabel("Time Taken(seconds)")
plt.grid(True)
plt.show()
