def min():
    colors = ["red", "green", "blue", "purple", "yellow", "black"]
    numbers = [12, 25, 71, 3.14, 7.8235]
    print(colors)
    #print(colors[0])
    #print(colors[1])
    #print(colors[2])
    for c in colors:
        print(c)
    print(len(colors))
    # print(colors[5:8])
    # print(colors[5:8:2])
    # print(colors[0:11:2])
    # print(colors[::2])
    # print(colors[::-1])
    # print(colors[13])

    # 리스트 연산
    total_list = colors + numbers
    #colors = colors + number
    colors.extend(numbers)
    colors.insert(0, "orange")  # 이 위치에 집어 넣는다. (그자리에 있던게 사라지는게 아닌, 뒤로 밀린다.)
    # colors = colors + ["white"]
    print("white" in colors) # 안에 white가 있는가?
    colors.append("white")
    colors = colors * 2
    colors.remove("white")
    colors.remove("white")
    print(total_list)
    #del colors --> 객체를 삭제함.
    del colors[-1]
    print(colors)
    print("white" in colors)

    colors.append(numbers)  # type: ignore
    print(colors)
    colors.remove(numbers)  # type: ignore
    print(colors)
    print(numbers)

    colors.append(numbers)  # type: ignore
    print(colors)
    del colors[0]  # type: ignore
    numbers.append(123)
    print(colors)
    print(numbers)
    # print(numbers)

if __name__ == "__main__":
    min()