import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("pendulo.dat")

t = data[:, 0]
F = t[0]
theta = data[:, 1]
Omega = theta[0]
w = data[:, 2]
dt = w[0]
N = int(len(t)/2)


plt.figure()
plt.plot(w[N:], theta[N:])
plt.ylabel('Theta (rad)')
plt.xlabel('w (rad/s)')
plt.savefig("poincare_"+str(F)+".png")
