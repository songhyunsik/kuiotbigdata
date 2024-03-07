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
 
 - view 배우기
    - 생성
    - 수정
    - 삭제

- index 배우기
    - 


```shell
sudo apt get install git
git clone https://github.com/songhyunsik/kuiotbigdata.git
