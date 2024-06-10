---
# kuiotbigdata
C/C++ database arduino...
---
---
### 2024-02-22(DBMS)
---
- 개요
- google slides
- github sign up
- unbuntu hangul setting
- VsCode install
- git install
- sql worckbench install - windows
- MySQL DBMS install - windows
- sql workbench install - unbuntu
- MySQL DBMS install - unbuntu
- vscode mysql extention install
- chapter01 데이터베이스 개론
- chapter03 SQL 기초
  - 데이터베이스 만들기 create database;
  - 데이터베이스에 테이블 만들기 3개
    - bookid
    - bookname
    - publisher
    - price
  - 데이터베이스에 데이터 넣기 insert into...values(...);
  - 유저 만들어서 권한 설정 하기;
    - grant all privilages on*.* to 'root'@'localhost' identified by '1234';
  - windows cli에서 testDB 생성하기 -p[ECF]
- 데이터 조작어
---
### 2024-02-23(DBMS)
---
- mysql unbuntu 문제 해결
- user를 새로 만들어서 권한을 주어 봤지만 해결되지 않았음.
- 권한 설정 및 user create 시
  - 새로운 유저를 만들때 mysql_nat  ive_password를 사용하도록 설정 
- 우분투 myworkbench에서 코드를 작성하고 vscode에서 git에 연동.
  - 추가한 파일:
    - create_database.sql
    - create_table.sql
    - insert_data.sql
    - create_user.sql
    - select.sql
  - 3차 내용 추가
    - 셀렉트 쓰는 방법
- 2장 데이터베이스 모델 진행.
- 3장 group by 165p까지 진행
  - 윈도우 DBMS를 우분투에서 연결
  - 윈도우 DBMS에 외부 IP 접근 가능한 user 생성
  - 윈도우 방화벽에 3360 포트 열기
  - 윈도우 DBMS에 임의의 데이터 넣고 우분투에 확인.
- 우분투 DBMS를 윈도우에서 연결
  - 우분투 DBMS에 외부 IP접근 가능한 user 접근 가능한 user 생성
  - 우분투 방화벽에 전체 포트 열기
  - 우분투 DBMS에 임의의 데이터 넣고 윈도우에서 확인
---
### 2024-02-29(DBMS)
---
  - 빌드 과정 설명
    - make cmake for linux
    - 전처리 어셈블리 바이너리 링크
  - make 실습
    - 기본 문법
    - 여러개 명령어 등록
    - 연속 실행
    - 생략 가능 명령어
   - 변수 사용
- 3장 끝까지 진행
  - DML //select - where, group by, having, order by
  - DDL //create, alter, drop 
  - DCL // insert, update, delete
- 4장 내장함수
  - SQL 내장함수
    - 숫자함수 // abs, ceil, floor, round, sign else.
    - 문자열 함수 // concat, replace, substr, length else.
    - 날짜 함수 // str_to_date, date_format, adddate, sysdate else. // format gudtlr %Y, %m, %d else.
---
### 2024-03-04(C)
---
Array //finMaxinArray else.
---
### 2024-03-05(C)
---
포인터 사용
---
### 2024-03-06(C)
---
포인터를 왜 사용하는가
- 함수 //swap, selectionSorting else.
---
### 2024-03-07(DBMS)
---
 - delete 다시 시도
    - show tables;
    - set sql_safe_updates=0;
    - delete from Customer where PK=10;

    - set foreign_key_checks=1;
    - delete from customer;

    - select * from information_schema.table_constraints
    - where table_name like 'Orders';

    - alter table Orders drop foreign key Orders_ibfx_1;
    - (오류떠서 재시도 해야함)

- 부속질의
    - select 부속질의 (스칼라 부속질의)
    - from 부속질의 ( 인라인 뷰)
    - where 부속질의
    - 단일 - 비교 ( =, >, <, >=, <=, !=, <>, is null, is not null) [비교]
    - 다수의 열, 단일 행 ( all, some, any) [한정]
    - 다수의 행, 다수의 열 ( in, not in, exists, not exists)[집합, 존재]

 - view 배우기
    - 생성 // create view vw_Book, create view vw_Customer, create view vw_Orders
    - 수정 // create or replace view vw_Customer
    - 삭제 // drop view vw_Customer;

- index 배우기
    - 생성 // create index Ix_book_1, create index Ix_book_2
    - 재구성 // analyze table 테이블이름
    - 삭제 // drop index ix_book_1 on Book;

- 데이터베이스 프로그래밍 배우기
    - 저장프로그램 // procedure, routine, trigger, function else.
    - Book에 INSERT문을 사용하여 (데이터를 삽입) 프로시저를 작성함. // CREATE-PROCEDURE-BEGIN-END // OUT: 출력 인자
    - 제어문을 사용하는 프로시저 // BEGIN-END문, IF-ELSE문, WHILE 문, RUTURN 문 등
    - 결과를 반환하는 프로시저 // 인자 타입 - OUT
    - 커서를 사용하는 프로시저 // CURSOR, OPEN, FETCH, CLOSE 등
    - 트리거 // INSERT, DELETE, UPDATE이 실핼될 때 자동으로 같이 실행되는 프로시저이다. // Book_log
    - 사용자 정의 함수// CALL // fnc_Interest // GLOBAL log_bin_trust_function_creators = ON; -> function 생성
    - 저장 프로그램의 문법 요약
    - 2장 진도 완료
---
### 2024-03-08(DBMS)
---
- python_C_mysql
    - .vscod 파일 만들기
        - c_cpp_properties.json / settings.json
    - 파이썬 연동
        - cmake파일 만들기 / CMakeLists.txt 작성
        - mkdir build && cd build
        - cmake ..
        - make
        - ./실행파일 / booklist
        - booklist를 이용하여 테이블 Book 자료 출력
- madangweb
    - madangdb 연결하기
    - cursor 등 활용하기
    - web에 연결하여 Firfox에서 확인하기

- VsCode 디버깅 설정

- flaskweb
    - pip install flask를 다운기
    - sudo apt install python3-flask를 다운
    - app.py 작성
    - python3 app.py
    - 브라우저에서 localhost:5000 접속
    - flask run을 하여 madangweb에 있는 Book 확인하기

- Summer
    - 테이블 만들어서 C, C++, JAVA, PYTHON 가격 데이터 넣음 // 수강생
    - 7-6까지 예제 진행

- 정규형
    - 이상현상
      - 데이터 조작 작업에 따라 테이블의 일관성을 훼손하여 데이터의 무결성을 깨뜨리는 현상
      - 삽입 시 이상현상 // 삽입이상
      - 삭제 시 이상현상 // 삭제이상
      - 수정 시 이상현상 // 수정이상
      - 예제 작성함

    - 함수 종속성
      - 정규화
        - 이상현상이 있는 테이블을 수정하여 문제를 해결하는 과정 / 먼저 테이블을 분석하여 기본키와 함수 종속성을 파악해야함
        - 이상현상이 발생하는 릴레이션을 분해하여 이상현상을 없애는 과정
        - 제 1정규형 // 릴레이션 R의 모든 속성값이 원자값을 가진다
        - 제 2정규형 // 릴레이션 R이 제 1정규형이고, 기본키가 아닌 속성이 기본키에 완전 함수 종속일 때 
        - 제 3정규형 // 릴레이션 R이 제  2규형이고, 기본키다 아닌 속성이 기본키에 비이행적으로 종속할 때때
        - BCNF // 릴레이션 R에서 함수 종속성 X->Y가 성립할 때 모든 결정자 X가 후보키

    - 무손실 분해
        - 릴레이션 R을 두 개의 릴레이션 R1과 R2로 분해했을 때, 다시 조인하면 원래의 릴레이션 R이 만들어지는 것을 의미
- 트랜젝션
    - 트랜젝션의 특성
    - 원자성
    - 일관성
    - 독립성
    - 지속성
    - 락
    - 공유락
    - 배타락트
    - 데드락
    - 데드락 발생 조건

- 데이터베이스 TEST 시험 진행
---
### 2024-03-11(C)
---
- 구조체(structure)
- 사용자 정의 자료형(user-defined type)
- 복합형(compund type)
- testDate 실습
- mkdir date/
    - main.c
    - date.h
    - date.c
    - 분리해서 실습
- mkdir processScore/
    - main.c
    - score.dot
    - 입출력칸 분리해서 실습
- name.c // 문자열 배운 후, 사용방법 실습

- 문자열 배열 배움 / 실습
    - stringArray.c
    - sumMatrix.c
    - testString.c
---
### 2024-03-15(C)
---
- strcat
- strcpy
- strcmp
- strlen

- sudo apt get install git // GITHUB를 사용하기 위한 설치 명령어
- git clone https://github.com/songhyunsik/kuiotbigdata.git (My GITHUB site)
---
# c_src
---
C언어 예제 저장용 깃허브
- 고려대 git으로 합침.
---
# c++ 수업
---
### 2024-03-26
---
- B <directory>       	Add <directory> to the compiler's search paths.
  -v                   	Display the programs invoked by the compiler.
  -###                 	Like -v but options quoted and commands not executed.
  -E                   	Preprocess only; do not compile, assemble or link.
  -S                   	Compile only; do not assemble or link.
  -c                   	Compile and assemble, but do not link.
  -o <file>            	Place the output into <file>.
  -pie                 	Create a dynamically linked position independent
                       	executable.

- Build: 컴파일을 여러 개 할때

- rm -r test/ —> 디렉토리 지울때
- rm -rf test/ —> 디렉토리 + 파일 지울때

- 절대경로: 내가 위치해 있는 파일에 상관없이, 최상위 폴더부터 써주는것

- \0 = null
- endl = \n,\r을 구분없이 사용할수있다.
---
### 2024-03-27
- operator, switch~case, while, for
---
### 2024-03-28
---
- function, array, pointer, quiz_15

- MSB: 최상위 비트
- LSB: 최하위 비트
---
### 2024-03-29
---
- 연습문제로 연습

- **배열은 0번이 주소값
---
### 2024-04-01
---
- https://modoocode.com/76
---
### 2024-04-02
---
- 클래스
- 선언
- 구현
---
### 2024-03-26
---
- 연습 문제 7번 해결
---
### 2024-03-26
---
- 연습문제 8번
- char ch[10]; → scanf에서 다운받을 때
- char *pch; → 공간을 만들어줄때
---
### 2024-04-11
---
- 프렌드 함수 진도
    - -> 프렌드를 사용하면 다른 함수에서도 접근할 수 있다.

    - ex7_1 해결
    - ex7_2 해결
    - ex7_3 해결
    - -> 생성과 구현 부분의 순서에 따라 오류가 나므로, 주의해야 한다.
    - -> friend RectManager; // 한번에 프렌드를 만들 때(클래스를 통째로 집어 넣은 것이다.)

- 연산자 중복 진도
    - ex7_4 해결
    - c = sum(a, b);
     
    - -> 두 개의 Power 객체를 더하는 코드를 작성함. ++ 일반 함수를 선언할 때, Power 객체이므로, int, float 등 처럼 형을 붙여주는 것이 아닌, Power 즉 객체를 붙여줘야 한다.
    
    - a.sum(b);
    - -> this를 이용하여 a를 가리킨다.
    - bool operator==(Power op2);을 만들어, a, b의 값이 동일한지 비교한다. 이후 참인지 거짓인지 판별하여 리턴한다.
---
### 2024-04-12
---
- 상속 진도

- 상속과 객체 포인터
    - 업캐스팅
    - 다운 캐스팅

- C++ 수업 마무리
---
# TCP_IP_SRC
---
### 2024-04-18
---
- client: connect(요청함)
- server: listen(요청을 기다림) - 요청을 받을 수도, 거절할 수 도 있음
- sudo chmod 777 data txt - 파일의 권한을 변경할 때 사용한다.
---
# OpenCV
---
### 2024-05-03
---
- OpenCV 설치와 기초 사용법
    - 데비안 설치 --> [sudo apt update / sudo apt install libopencv-dev python3-opencv]

- CH02_HelloCV 주요 함수
    - imread()
    - imwrite()
    - namedWindows()
    - destoryWindows()
    - resizeWindows()
    - imshow()
    - waitkey()

- CH03_주요 클래스
    - Point_
    - Size
    - Rect
    - RotatedRect && boundingRect
    - Range
    - String
    - Mat
    - cv::Rect 사용한 방법 - 얕은 복사 형식
    - at, ptr: 행렬의 원소 값 참조
    - convertTo: 메소드(타입 변환)
    - vec 클래스
    - scalar 클래스
    - InputArray 클래스
    - OutputArray 클래스

- CH04_OpenCV 주요 기능
    - 동영상 파일 다루기
        - VideoCapture 클래스
        - VideoWriter 클래스
    - 직선 그리기
        - line() 함수
        - arrowedLine 함수
        - drawMarker 함수
---
### 2024-05-07
---
- CH04_OpenCV 주요 기능
    - 도형 그리기
        - rectangle 함수
        - circle 함수
        - ellipse 함수
    - 문자열 출력하기
        - putText 함수
        - freeType의 putText 함수를 쓰면 한글 가능
    - 키보드 이벤트 처리
        - waitkey 함수
        - waitkeyEx 함수
        - waitKey: 동적 시간 조절하기 힘듦
    - 마우스 이벤트 처리
        - setMouseCallback 함수
        - createTrackbar 함수
        - FileStorage 클래스
    - 유용한 기능
        - Mat.setTo() - 마스크 연산
        - Mat.copyTo() - 마스크 연산
        - TickMeter 클래스 - 연산 시간측정
        - sum() 및 mean() 함수
        - minMaxLoc() 함수
        - normalize() 함수
        - cvRound() 함수
- CH05 영상의 밝기와 명암비 조절
  - saturated cast 예제
---
### 2024-05-08
---
- CH05 영상의 밝기와 명암비 조절
    - 불러오기 IMREAD_GRAYSCALE 불러오기
    - 변환하기 cvtColor() 함수를 사용한다.
    - -> 최대값과 최소값이 존재한다. 일반적으로 0~255
    - 히스토그램 분석: 영상의 밝기 또는 색상 분포를 시각적으로 나타내는 도구. 
        - calcGrayHist
        - getGrayHistlmage
    - 히스토그램 스트레칭: 보통 명암비가 낮은 영상은 히스토그램이 특정 구간에 집중되어 나타나는데 이러한 히스토그램을 마치 고무줄을 잡아 늘이듯이 펼쳐서 히스토그램 그래프가 그레이스케이일 전 구간에서 나타나도록 변환하는 기법.
    - 히스토그램 평활화(histogram equalization): 영상의 대비를 개선하기 위해 사용.  
---
# Python_Programming
---
### 2024-05-21
---
### CHAPTER 2
- Python 수업 시작
- Miniconda 설치
- Miniconda에서 my_project 가상 설정
- /home/songhyunsik/miniconda3/envs/my_project/bin/python, /home/songhyunsik/Python_Programming/python/veriable.py 

- [3] 간단한 연산
    - 제곱수는 **
    - / 는 float형의 나눗셈
    - // 는 int형으로 나오며, 반올림한다고 보면 됨.
    - 파이썬은 증가연산자가 없음. -> a += 1 형식으로 사용해야 함.

### CHAPTER 3
- [2] 표준 압력 함수: input() 함수
- [3] Lab: 화씨온도 변환기
- [4] 리스트의 이해
    - 리스트 list()
    - 배열 init() ->
    - vector<type> (string) (string) (string만)
    - list() (A type) (B type) (타입무관)

    - c/c++ --> 메모리 관리
    - pythob --> 메모리 관리 --> gc gabage collector

    -

### CHAPTER 4
- [1] 조건문
---
### 2024-05-22
---
### CHAPTER 4
- [3] 반복문 

### CHAPTER 5
- [1] 함수 기초
    - 함수란? - 어떤 일을 수행하는 코드의 덩어리
    - 함수의 선언 
        - def: 'definition'의 줄임말로 함수의 정의를 시작한다는 의미이다.
        - 함수 이름: 함수 이름은 개발자가 마음대로 지정할 수 있지만 일반적으로 파이썬에서는 다음과 같은 규칙을 사용한다.
            - 소문자로 입력한다.
            - 띄어쓰기를 할경우 _ 사용
            - 작업을 나타내기 위해 동사와 명사를 함꼐 사용하는 경우가 많다.
            - 외부에 공개하는 함수일 경우 줄임말 대신 짧고 명료한 이름으로 정한다.
        - 메개변수(parameter): 함수에서 입력값으로 사용하는 변수를 의미하며, 1개 이상의 값을 적을 수 있다.
        - 명령문: 반드시 들여쓰기한 후 코드를 입력해야 한다. 수행해야 하는 코드는 지금까지 배운 일반적인 코드와 같다. if나 for문 등의 제어문을 사용할 수도 있고, 고급 프로그래밍 기법으로 함수 안에 함수를 사용하기도 한다.
    - 함수의 실행 순서
        - 함수 선언
        - 함수 호출
    - 프로그래밍의 함수와 수학의 함수
        - f(x) = x + 1
    - 함수의 형태
        - 반환값X + 매개변수X = 함수 내부 명령문만 실행
        - 반환값X + 매개변수O = 매개변수를 사용하여 명령문만 수행
        - 반환값O + 매개변수X = 매개변수 없이 명령문을 수행한 후 결과값 반환
        - 반환값O + 매개변수O = 매개변수를 사용하여 명령문을 수행한 후 결과값 반환

- [2] 함수 심화

### CHAPTER 6
- [1] 문자열의 이해
- [2] 함수 심화

---
### 2024-05-23
---
### CHAPTER 7

### CHAPTER 8

### CHAPTER 9
- [1] 람다 함수
    - 람다 함수 사용: 함수의 이름 없이 함수처럼 사용할 수 있는 익명의 함수수
    - 람다 함수의 다양한 형태: 람다 함수는 다양한 형태로 사용할 수 있다.
- [2] 맵리듀스
    - 맵리듀스[MapReduce]: 파이썬뿐만 아니라 아니라 빅데이터를 처리하기 위한 기본 알고리즘으로 많이 사용한다.
        - map()
        - reduce()
    - map() 함수: 연속 데이터를 저장하는 시퀸스 자료형에서 요소마다 같은 기능을 적용할 때 주로 사용한다. 일반적으로 리스트나 튜플처럼 요소가 있는 시퀸스 자료형에 사용된다.
        - 제네레이터의 사용: 파이썬 2.x와 3.x에서의 map() 함수 코드가 약간 다르다.
            - 2.x -> map(f, ex)
            - 3.x ->list(map(f, ex))
        - 리스트 컴프리헨션과의 비교
            - 람다 함수나 map() 함수와 같은 효과를 낼 수 있다.
        - 한 개 이상의 시퀸스 자료형 데이터의 처리
            - map() 함수의 또 다른 특징은 2개 이상의 시퀸스 자료형 데이터를 처리하는 데도 문제가 없어, 여러 개의 시퀸스 자료형 데이터를 입력값으로 사용할 수 있다는 점이다.

### CHAPTER 10
- [1] 객체 지향 프로그래밍의 이해
    - 객체 지향 프로그래밍을 배우는 이유: 다른 사람이 작성한 코드를 어떻게 사용하면 좋을지에 대한 답이기 때문이다.
    - 객체와 클래스
        - 객체: 실생활에 존재하는 실제적인 물건 또는 개념. (속성과 행동으로 구성) -> 객체 지향 프로그래밍은 이러한 객체의 개념을 활용하여 프로그램을 표현하는 기법이다. (속성{변수}과 행동{함수}으로 구성)
        - 클래스: 객체가 가져야 할 기본 정보를 담은 코드로 일종의 설계도 코드라고 보면 된다.
- [2] 파이썬의 객체 지향 프로그래밍
    - 클래스 구현하기
        - class  /  SoccerPlayer(object):
        - 클래스 예약어 / 클래스 이름(상속받는 객체명)
        - 속성의 선언: 속성에 대한 정보를 선언하기 위해서는 __init__()라는 예약 함수를 사용한다. 앞서 말한 예약함수가 대표적인 것이고, 이 외에 __str__, __add__ 등이 있다
---
### 2024-05-24
---
- 모듈과 패키지
  - 모듈
    - 파이썬 파일
    - import 모듈이름
    - from 모듈이름 import 함수이름
    - import 모듈이름 as 별칭
    - name 변수
  - 패키지
    - 모듈을 모아놓은 디렉토리
    - init.py 파일
    - all 변수
    - from 패키지이름 import 모듈이름
    - from 패키지이름.모듈이름 import 함수이름
    - from 패키지이름.모듈이름 import *
  - 패키지 만들기
    - roboadvisor 패키지 만들기
      - roboadvisor 디렉토리 만들기
      - init.py 파일 만들기
    - sub 패키지 만들기
      - crawling 디렉토리 만들기
      - init.py 파일 만들기
      - database 디렉토리 만들기
      - init.py 파일 만들기
      - analysis 디렉토리 만들기
      - init.py 파일 만들기
    - 메타 데이터 넣기
      - init.py 파일에 version 변수 추가
    - 패키지 네임스페이스 설정
- 예외 처리와 파일 다루기
  - 예외 처리
    - try, except, else, finally
    - raise
    - assert
    - Exception 클래스
      - 상속 받아서 사용자 정의 예외 처리
    - 파일 다루기
      - open, close
      - read, write
      - readline, readlines
      - with
        - close 없이 파일을 다루기
      - pickle
        - 객체를 바로 저장 가능, 여러개의 객체도 저장 가능
- 로그 관리
  - logging
    - 로그 레벨
    - 로그 포맷
    - 로그 파일
    - 로그 핸들러
    - 로그 필터
    - 로그 포맷터
  - ogging 환경 변수 설정 및 이용
    - 환경 변수 설정
    - configparser
    - argparse
    - logging.config
    - logging.config.fileConfig
- 웹 스크래핑
  - HTML 파싱
    - 정규 표현식
- xml 과 json
  - xml
    - BeautifulSoup
  - json
  - csv
---
# 파이썬 통계
---
### 2024-05-27
---
- numpy 브로드캐스팅 연산까지
---
### 2024-05-28
---
- 시본 까지 
---
### 2024-05-29
---
- 플롯리(seaborn)
---
### 2024-05-29
---
- 통계적 유의성: 통계학자가 자신의 실험(또는 기존 데이터에 대한연구) 결과가 우연히 일어난 것인지 아니면 우연히 일어날 수 없는 극단적인 것인지를 판단하는 방법이다.

- p값: 통계적 유의성을 정확히 측정하기 위한 지표.
---
### 2024-05-30
---
- 다중선형회귀
---
### 2024-05-31
---

---
### 2024-06-03
---

---
### 2024-06-04
---

- [배깅과 랜덤 포레스트]

  - 앙상블(ensmeble) : 
  
  - 배깅(bagging) : 

  - 랜덤 포레스트(random forest) : 

  - 변수 중요도(Variable Importance) : 

  - 하이퍼파라미터

- [부스팅]

  - 앙상블(ensmeble) : 

  - 부스팅(boosting) : 

  - 에이다부스트(AdaBoost) : 

  - 그레이디언트 부스팅(gradient boosting) : 

  - 확률적 그레이디언트 부스팅(stochastic gradient boosting) :

  - 정규화(regularization) : 

  - 하이퍼파라미터(hyperparameter) : 

  - 부스팅 알고리즘 :

  - XG부스트 : 

  - 정규화 : 오버피팅 피하기 :
    - L1 정규화(Lasso) : 
    - L2 정규화(Ridge) :
    - Elastic Net :

  - 하이퍼파라미터와 교차타당성검사 : 
    - K-폴드 교차타당성 :

- [챕터 7 비지도 학습(Unsupervised Learning)]

  - 비지도 학습(Unsupervised Learning) :

  - 클러스터링(Clustering) : 

  - K-평균 클러스터링(K-means Clustering) :

  - 계층적 클러스터링(Hierarchical Clustering) : 

  - DBSCAN (Density-Based Spatial Clustering of Applications with Noise):

  - 차원 축소(Dimensionality Reduction) : 

  - 주성분 분석(PCA, Principal Component Analysis) :

  - 선형판별분석(LDA, Linear Discriminant Analysis) : 

  - t-SNE(t-Distributed Stochastic Neighbor Embedding) :

- [주성분 분석(PCA, Principal Component Analysis)]

  - 주성분 분석(PCA, Principal Component Analysis) :

  - 주성분(principal component) :

  - 부하(loading) : 

  - 스크리그래프(screeplot) :

  - 비지도 학습 :

  - 클러스터링 :

  - 차원 축소 :

  - 주성분 계산(Principal Component Calculation) : 
    - [계산과정]
    - 데이터 표준화 :
    - 공분산 행렬 계산 :
    - 고유값 및 고유백터 계산 :
    - 주성분 선택 :
    - 주성분 변환 :

  - 공변동(covariation) : 

  - 주성분 해석(Principal Component Interpretation) :
    - [주성분의 해석 단계]
    - 고유백터 :
    - 주성분 점수 :
    - 주성분의 분산 :

  - 스크리 그래프(Scree Plot) :
    - [그리는 방법]

  - 대응분석 : 
    - [주요단계]
    - 교차표 구성 :
    - 행과 열의 프로파일 계산 :
    - 카이제곱 거리 계산 :
    - 고유값과 고유백터 계산 :
    - 차원 축소 및 시각화 :

  - 대응분석의 해석
    - 행과 열의 좌표 : 
    - 주성분의 중요도 : 
    - 그래프 해석 :

  - 대응분석과 주성분 분석의 비교
    - 데이터 유형 :
    - 수학적 원리 :
    - 목표 :

- [K-평균 클러스터링]

  - K-평균 클러스터링 :

  - 클러스터(cluster) :
  - 클러스터 평균(cluster mean) : 
  - k : 클러스터의 개수

---
### 2024-06-05
---

- [계층적 클러스터링(hierarchical clustering)]

  - 계층적 클러스터링(hierarchical clustering) : 

  - 덴드로그램(dendrogram) : 
    - 장점 :
    - 단점 :

  - 거리(distance)

  - 비유사도(dissimlarity)
    - 비유사도 측정: 
    - 비유사도 측정 방법 요약
      - 단일연결 : 
      - 완전연결 : 
      - 평균연결 : 
      - 워드기법(Ward's Method) :

  - 병합 알고리즘 : 
    - 초기화 : 
    - 반복 병합 :

- [모델 기반 클러스터링(Model-based Clustering)]

  - 모델 기반 클러스터링(Model-based Clustering) : 

  - 정규혼합 모델(Gaussian Mixture Model, GMM) : 

  - 다변량정규분포 :

  - 정규혼합 : 

  - 클러스터 개수 결정하기
    - 베이즈 정보 기준(BIC)

- [스케일링과 범주형 변수]

  - 스케일링(scaling) : 

  - 정규화(normalization) : 

  - 고워거리(Gower's distance) : 

  - 변수 스케일링(Feature Scaling) : 
    - [특성]
    - 모델 성능 향상 : 
    - 수렴 속도 향상 :

  - 주요 스케일링 기법 :

  - 지배변수(Dominant Variable) :

  - 범주형 데이터와 고위 거리
    - 범주형 데이터와 거리 측정 : 

  - 혼합데이터의 클러스터링 문제 : 

---
### 2024-06-07
---

- [Kaggle] : 정의와 사용법 설명 들은 후, titanic 문제 해결
- [Colab] : Colab을 통해 실습을 진행함. / 오버피팅, 변수중요성 등의 개념을 학습함.
    - [실습예제]
    - overfitting.ipyb
    - xgboost_py.ipyb
    - kaggle.Titanic1.ipyb
    - kaggle.Titanic2.ipyb

- house prices 과제

- 오후에는 위니드소프트 특강.

---
### 2024-06-10
---

- [Part 02] 데이터 전처리
  - 01 데이터 전처리의 개념
    - 머신러닝 모델에 훈련 데이터를 입력하기 전에 가공하는 단계를 말한다.

  - 02 데이터 품질 문제
    - 데이터 분포와 지나친 차이, 기수형 데이터와 서수형 데이터, 결측치, 이상치

  - 03 데이터 전처리 전략
    - 결측치 처리하기 : 드롭과 채우기(drop&fill)
    - 범주형 데이터 처리하기 : 원핫인코딩(one-hot- encoding)
    - 범주형 데이터로 변환하여 처리하기 : 바인딩(bining)
    - 데이터의 크기 맞추기 : 피쳐 스케일링(feature scaling)

  - 04 머신러닝 프로세스
    - 데이터 획득
    - 데이터 정제[데이터 전처리 피쳐 엔지니어링 EDA]
      - 데이터 나누기[데이터셋 유지 -> 모델 평가 / 데스트 데이터셋 -> 모델 테스트]
    - 훈련 데이터셋
    - 머신러닝 모델 훈련
    - 모델 테스트[앙상블 방법으로 하이퍼 매개변수 변환 -> 머신러닝 모델 훈련]
    - 모델 평가[성능지표 만들기]
    - 모델 배치

  - 05 데이터 전처리 실습하기
    - (1) 실제 데이터 확보하기
    - (2) 연습용 데이터 확인하기
    - (3) 데이터 열 확인하기
    - (4) 데이터 노트 작성하기
    - (5) 결측치 확인하기
    - (6) 범주형 데이터 처리하기
    - (7) 데이터 시각화 진행하기

- [Part 03] 선형회귀의 기초
  - 01 선형회귀(Linear Regression)
    - 종속변수 y와 한 개 이상의 독립녀수 x와의 선형 상관관계를 모델링하는 회귀분석 기법이다.

  - 02 비용함수(cost function)
    - 머신러닝에서 최소화해야 할 예측값과 실제값의 차이로 다음과 같이 표현한다.

  - 03 최소자승법과 경사하강법
    - 최소자승법(least square method) : 선형대수 표기법을 사용하여 방정식으로 선형회귀 문제를 푸는 방법
    - 경사하강법(gradient descent) : 경사를 하강하면서 수식을 최소화하는 매개변수의 값을 찾아내는 방법

  - 04 홀드아웃 메서드(hold-out method)
    - 일반적인 데이터 분할 기법으로, 모델 생성을 위해 전ㄴ체 데이터에서 랜덤하게 학습 데이터셋과 테스트 데이터셋으로 나눈다. 데이터를 나누는 비율은 데이터의 개수마다 다른데, 일반적으로 7:3 또는 8:2 정도의 비율로 나눈다.

  - 05 선형회귀 성능 측정 지표
    - MAE(Mean Absolute Error) : 평균 절대 잔차로, 예측값과 실제값의 차이를 절댓값으로 표현하는 지표이다.
    - RMSE(Root Mean Squared Error) : 평균제곱근 오차로, 오차에 대해 제곱한 다음 모든 값을 더하여 평균을 낸 후 제곱근을 구하는 방식이다.
    - 결정계수(R-squared) : 두 개의 값의 증감이 얼마나 일관성을 가지는지 나타내는 지표이다.

---
### 2024-06-11
---

```shell
