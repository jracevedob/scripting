#!/usr/bin/python3

######################################################################################
# Scatter Plot
# Graphics to represent byte difference between transmitted and received data using
# Ettus Research USRP N310
#
# Note:
# Data transmitted: files of 1MB, 10MB, 100MB and 1GB
# Result: Difference graph for each data traffic
# Note: Synchronization time discarded from the plots
#
# 2021, jacevedo - TUD Deutsche Telekom Chair of Communication Networks
# 
# Contact: javier.acevedo@tu-dresden.de - jracevedob.github.io
#
######################################################################################

import matplotlib.pyplot as plt
import numpy as np; np.random.seed(0)
import seaborn as sns; sns.set()

fig, ax = plt.subplots(figsize=(30,12))
graph = sns.heatmap(df_pivot, cmap="Blues", linecolor="white", linewidths=0.1, 
            cbar_kws={"orientation": "horizontal", "shrink":0.40, "aspect":40, "label": "Number of accidents"})


ax.set_title("Number of lost data packets during transmissions", 
fontsize=30, fontweight="bold")

from matplotlib import rcParams
rcParams['axes.titlepad'] = 70 # Space between the title and graph

locs, labels = plt.yticks() # Rotating row labels
plt.setp(labels, rotation=0) # Rotating row labels

ax.xaxis.tick_top() # x axis on top
ax.xaxis.set_label_position('top')

graph.tick_params(axis='both',labelsize=15) # Tick label size graph

plt.show()


