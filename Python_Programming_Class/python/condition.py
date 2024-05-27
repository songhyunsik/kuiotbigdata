def min():
    # myage = int(input("나이를 입력해주세요: "))
    # if (myage > 30) and (myage < 50):
    #     print("클럽에 가입되었습니다.")
    # else:
    #     print("아니요. 클럽에 들어올 수 없습니다.")

    score = int(input("점수를 입력해주세요: "))

    if score >= 90: 
        grade = 'A'
    elif score >= 80: 
        grade = 'B'
    elif score >= 70: 
        grade = 'C'
    elif score >= 60: 
        grade = 'D'
    else: 
        grade = 'E'
    print(f"학점은 {grade} 입니다.");

if __name__ == "__main__":
    min()