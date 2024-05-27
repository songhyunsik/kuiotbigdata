import numpy as np

def main():
    li1 = [[1, 2, 3],[1, 2, 3],[1, 2, 3]]
    test_array = np.array(li1, dtype=np.int8) # list는 콤마가 찍히지만, array는 그렇지 않는다.
    print(type(test_array))
    print(test_array)
    print(test_array.dtype)
    print(test_array.shape) # n차원
    print(test_array.ndim)
    print(test_array.size)
    for i in test_array:
        print(i)
    
if __name__=="__main__":
    main()