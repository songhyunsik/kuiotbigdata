# kuiotbigdata
C/C++ database arduino...

---
## 2024-02-22(DBMS)
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
## 2024-02-23(DBMS)
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
## 2024-02-29(DBMS)
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
## 2024-03-04(C)
---
Array //finMaxinArray else.

---
## 2024-03-05(C)
---
포인터 사용

---
## 2024-03-06(C)
---
포인터를 왜 사용하는가
- 함수 //swap, selectionSorting else.

---
## 2024-03-07(DBMS)
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
## 2024-03-08(DBMS)
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
## 2024-03-11(C)
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

```shell
sudo apt get install git
git clone https://github.com/songhyunsik/kuiotbigdata.git
