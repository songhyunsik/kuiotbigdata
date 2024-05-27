def min():
    sentence = "I love you"
    reverse_sentence = ""
    # for char in sentence: # char는 캐릭터 형이 아님. (파이썬에서는 없음)
    #     reverse_sentence = char + reverse_sentence
    # print(reverse_sentence)
    print(sentence)
    print(sentence[::-1])

if __name__ == "__main__":
    min()