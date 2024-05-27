import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from statsmodels import robust

folder = "/home/songhyunsik/kuiotbigdata/Python_Programming_Class/python/pythonData/data/"
def main():
    state = pd.read_csv(folder + "state.csv")
    print(f"미국주의 인구 표준 편차는 {state['Population'].std()}")
    iqr = state["Population"].quantile(0.75) - state["Population"].quantile(0.25)
    print(f"미국 주의 사분위범위(iqr) 은 {iqr} 이다.")
    mad = robust.scale.mad(state["Population"])
    print(f"미국 주의 MAD 는 {mad} 이다.")

    # plt.boxplot(state["Population"])
    # plt.show()
    state["Population"].plot.box()
    plt.show()
    # show plot


if __name__=="__main__":
    main()