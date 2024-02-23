# kuiotbigdata
C/C++ database arduino...

---
## 2024-02-22
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
## 2024-02-23
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
[EOF]

```shell
sudo apt get install git
git clone https://github.com/songhyunsik/kuiotbigdata.git
