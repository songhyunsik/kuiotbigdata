use madangdb;
create index Ix_book_1 on Book(bookname);
create index Ix_book_2 on Book(publisher, price);

select * from Book where publisher = '대한미디어' and price >= 30000;
select * from Book where bookname like '%축구%';
select * from Book;

drop index ix_book_1 on Book;

analyse 