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

flights = sns.load_dataset("flights")
flights = flights.pivot("month", "year", "passengers")

# set height ratios of heatmap and coresponding colorbar
# hspace shows space between plots
# adjust hspace to put your title of colorbar correctly
grid_kws = {"height_ratios": (.9, .05), "hspace": .15}
f, (ax, cbar_ax) = plt.subplots(2, gridspec_kw=grid_kws, figsize=(30,12))
ax = sns.heatmap(flights, ax=ax,
    cbar_ax=cbar_ax,
    cbar_kws={"orientation": "horizontal","label": "Losses"})

# set title and set font of title
ax.set_title("Number of lost data packets during transmissions", 
fontsize=30, fontweight="bold")

# set font size of colorbar labels
cbar_ax.tick_params(labelsize=25) 

plt.show()


