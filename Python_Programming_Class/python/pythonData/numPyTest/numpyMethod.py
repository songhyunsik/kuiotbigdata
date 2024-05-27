import numpy as np

def main():
    li1 = [[1, 2, 3, 4],[1, 2, 3, 4],[1, 2, 3, 4]]
    test_array = np.array(li1, dtype=np.int8) # list는 콤마가 찍히지만, array는 그렇지 않는다.
    print(test_array.shape)
    test_array2 = test_array.reshape((-1,)) # 원소의 개수가 딱 맞아 떨어져야 한다. // -1을 사용하면 앞에 숫자에 맞춰 조절된다.
    print(test_array2.shape)
    print(test_array2)
    li2 = [i for i in range(1000)]
    tensor_array = np.array(li2, dtype=np.int64)
    tensor_array = tensor_array.reshape((10,2,5,10))
    print(tensor_array)

    # flatten reshape(-1)과 같은 효과를 가진다.
    print(tensor_array.flatten())
    
if __name__=="__main__":
    main()