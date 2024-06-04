import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import prince
from adjustText import adjust_text
from sklearn.decomposition import PCA

def abline(slope, intercept, ax):
    x_vals = np.array(ax.get_xlim())
    return(x_vals, intercept + slope * x_vals)

def main():
    folder = "/home/songhyunsik/kuiotbigdata/Python_Programming_Class/python/pythonData/data/"
    housetasks : pd.DataFrame = pd.read_csv(folder + "housetasks.csv", index_col=0)

    ca = prince.CA(n_components=2)

    ca = ca.fit(housetasks)

    fig = plt.figure()
    ax = fig.add_subplot()
    ca.row_coordinates(housetasks).plot.scatter(x=0, y=1, ax=ax)
    ca.column_coordinates(housetasks).plot.scatter(x=0, y=1, ax=ax, c='C1')
    texts= []
    for idx, row in ca.row_coordinates(housetasks).iterrows():
        texts.append(plt.text(row[0], row[1], idx)) # type: ignore
    for idx, row in ca.column_coordinates(housetasks).iterrows():
        texts.append(plt.text(row[0], row[1], idx, color='C1')) # type: ignore
    adjust_text(texts, only_move={'points':'y', 'texts':'y'})
    plt.tight_layout()
    plt.show()
    
if __name__ == "__main__":
    main()