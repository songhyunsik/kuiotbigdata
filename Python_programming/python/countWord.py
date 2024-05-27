def main():
    folder = "/home/songhyunsik/Python_Programming/python/"
    with open(folder + "yesterday.txt", "r") as f:
        #yesterday_lyric = f.readlines()
        yesterday_lyric = f.read()


    # contents =""
    # for line in yesterday_lyric:
    #     contents += line.strip() + "\n"
    #print(contents)
    n_of_yesterday = yesterday_lyric.upper().count("YESTERDAY")
    print(f" 'YESTERDAY'의 단어수: {n_of_yesterday}")

if __name__ == "__main__":
    main()