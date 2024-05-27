import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from statsmodels import robust

folder = "/home/songhyunsik/kuiotbigdata/Python_Programming_Class/python/pythonData/data/"
def main():
    state = pd.read_csv(folder + "state.csv")
    
    binnedPopulation = pd.cut(state["Population"], 10)
    binnedPopulation.value_counts()
    print(binnedPopulation)
    print(binnedPopulation.value_counts())

    # 도수분포표와 히스토그램
    # state.hist(state["Population"], bins=10)
    # plt.show()

    # state["Population"].plot.hist(figsize=(1,1), bins=10)
    # state["Population"].plot.hist(figsize=(2,2), bins=20)
    # state["Population"].plot.hist(figsize=(3,3,), bins=30)
    # state["Population"].plot.hist(figsize=(4,4), bins=40)

    # axl = state["Population"].plot.hist(bins=10)
    # plt.show()

    # 밀도 그림과 추정
    ax = state["Murder.Rate"].plot.hist(density=True ,xlim=(0, 12), bins=range(1,12)) # type: ignore
    state["Murder.Rate"].plot.density(ax = ax)
    ax.set_xlabel('Murder Rate (per 100.00)')
    plt.show()


if __name__=="__main__":
    main()