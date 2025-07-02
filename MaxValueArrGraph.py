import matplotlib.pyplot as plt

sizes =[3000,5000,7000,9000,10000]
times=[0.000003,0.000006,0.000009,0.000010,0.000012]

plt.plot(sizes,times,marker='o')
plt.title("Max Value Search time vs Array size")
plt.xlabel("Array Size(n)")
plt.ylabel("Time Taken(seconds)")
plt.grid(True)
plt.show()
