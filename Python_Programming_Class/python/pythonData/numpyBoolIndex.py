import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from statsmodels import robust

def main():
    x_1 = np.random.randint(1, 100, 10)
    x_2 = np.random.randint(1, 100, 10)
    print(f"x_1 : {x_1}")
    print(f"x_2 : {x_2}")
    print(f"x_1 > x_2 : {x_1 > x_2}")
    print(f"x_1 > x_2).all() : {(x_1 > x_2).all()}")
    print(f"x_1 > 100).any() : {(x_1 > 100).any()}")
    print(f"(x_1 > x_2).any() : {(x_1 > x_2).any()}")
    print(f"(x_1 > 0) : {(x_1 > 0)}")
    print(f"(x_1 > 0).all() : {(x_1 > 0).all()}")
    
    


if __name__=="__main__":
    main()