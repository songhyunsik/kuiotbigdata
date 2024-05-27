def main():
    filename = "/home/songhyunsik/Python_Programming/python/yesterday.txt"
    with open(filename, "r") as f:
        cont = f.read()
    # with open(filename, "r") as f:
    #     # cont = f.read()
    #     cont = f.readlines()
    # for c in cont:
    #     print(c, end="")

    # with open(filename, "r") as f:
    #     while con := f.readline():
    #         print(con)
    word_list = cont.split()
    line_list = cont.split("\n")

    print(f"총 글자의 수 {len(cont)}")
    print(f"총 단어의 수 {len(word_list)}")
    print(f"총 줄s의 수 {len(line_list)}")

if __name__ == "__main__":
    main()