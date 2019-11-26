import numpy as np
import matplotlib.pyplot as plt

f = np.array([1.35, 1.36, 1.37, 1.38, 1.39, 1.4, 1.41, 1.42, 1.43, 1.44, 1.45, 1.46, 1.47, 1.48, 1.49, 1.5])
plt.figure()
for i in f:
	data = np.loadtxt("pendulo_"+str(i)+".dat")
	t = data[:, 0]
	F = t[0]
	theta = data[:, 1]
	Omega = theta[0]
	T = 2*np.pi/Omega
	w = data[:, 2]
	dt = w[0]
	N = int(len(t)/2)
	t = t[N:]
	q = (t%T<0.01)
	theta = theta[N:]
	k = np.ones(len(theta[q]))*i
	plt.scatter(k, theta[q], color='k')
plt.ylabel('Fd')
plt.xlabel('Theta (rad)')
plt.savefig("bifurcacion.png")


