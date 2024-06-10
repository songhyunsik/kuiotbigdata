import numpy as np
from sklearn.model_selection import train_test_split

def main():
    x = np.arange(10).reshape((5, 2))
    y = range(5)
    print(f"x: {x}")
    print(f"y: {y}")
    x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.33, random_state=42)
    print(f"x_train : \n{x_train}")
    print(f"x_test : \n{x_test}")
    print(f"y_train : \n{y_train}")
    print(f"y_test : \n{y_test}")

if __name__ == '__main__':
    main()