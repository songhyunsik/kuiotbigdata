def asterisk_tesk(a, b, *abc):
    print(a)
    print(b)
    for i in abc:
        print(i)
    return a + b + sum(abc)

def asterisk_tesk2(a, b, *args):
    x, y, *z = args
    return x, y, z

def main():
    print(asterisk_tesk(1, 2, 3, 4, 5))
    print(asterisk_tesk2(1, 2, 3, 4, 5))
    a, b, c = asterisk_tesk2(1, 2, 3, 4, 5)
    print(type(c))

if __name__ == "__main__":
    main()