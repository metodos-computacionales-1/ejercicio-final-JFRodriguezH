import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("pendulo.dat")

t = data[:, 0]
N = len(t)
theta = data[:, 1]
w = data[:, 2]

plt.figure()
plt.plot(t[int(N/2):], theta[int(N/2):])
plt.savefig("pendulo.png")