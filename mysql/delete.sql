show tables;
set sql_safe_updates=0;
delete from Customer where PK=10;

set foreign_key_checks=1;
delete from customer;

select * from information_schema.table_constraints
where table_name like 'Orders';

alter table Orders drop foreign key Orders_ibfx_1;