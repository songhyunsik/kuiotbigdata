def main():
    student_info = {20240012:'Sungchul', 20140059:'Jiyoung', 20140058:'Jaehong'} # 순서가 없음.

    # 자료 확인
    print(student_info[20240012])
    

    # 추가
    student_info[20140013] = 'Sugil'
    
    for key in student_info:
        print(student_info[key])

    print(type(student_info))

    # 메소드 keys(), values(), items()
    print(student_info.keys())
    print(student_info.values())
    print(student_info.items())
    for key, value in student_info.items():
        print(key, value)

if __name__ == "__main__":
    main()