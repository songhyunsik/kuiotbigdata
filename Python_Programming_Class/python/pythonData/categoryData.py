import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from statsmodels import robust


folder = "/home/songhyunsik/kuiotbigdata/Python_Programming_Class/python/pythonData/data/"
def main():

    # 이진 데이터와 범주 데이터 탐색하기
    dfw = pd.read_csv(folder + "dfw_airline.csv")
    ax = dfw.transpose().plot.bar(figsize=(4,4), legend=False)
    ax.set_xlabel('Cause of delay')
    ax.set_ylabel('count')
    plt.show()
    
if __name__=="__main__":
    main()