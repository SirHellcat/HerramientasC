import numpy as np
import matplotlib.pyplot as plt

datax, datay = np.loadtxt("dat.txt", unpack = True)

fig, ax = plt.subplots()
plt.plot(datax, datay, 'r-o', label="Data")
ax.legend()
ax.set_xlabel("xtitle")

fig.savefig("fig.pdf")