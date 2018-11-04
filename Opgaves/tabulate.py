import numpy as np
import matplotlib.pyplot as plt

# load the columns
x, fx = np.loadtxt("tabulate.txt", unpack=True)

# create and save the plot
plt.figure(figsize=(6,4))
plt.plot(x, fx)
plt.xlim(0, 2*np.pi)
plt.xlabel("x")
plt.ylabel("fx")
plt.savefig("tabulate.pdf", bbox_inches='tight', pad_inches=0.1)
plt.close()
