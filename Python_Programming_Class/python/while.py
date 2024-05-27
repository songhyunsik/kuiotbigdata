def min():
    i = 1
    while True:
        i += 1
        if i % 2 == 0:
            continue
        if i > 11:
            break
        print(i)

if __name__ == "__main__":
    min()