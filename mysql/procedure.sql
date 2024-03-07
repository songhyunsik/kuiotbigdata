delimiter //;

create procedure dorepeat2(pl int)
begin
	set @x= 0;
    repeat 
		set @x=@x+1;
	until @x > pl
    end repeat;
end;
//

delimiter;

call dorepeat(100);
select @x;

USE `madangdb`;
DROP procedure IF EXISTS `insertbook`;

USE `madangdb`;
DROP procedure IF EXISTS `madangdb`.`insertbook`;
;

DELIMITER $$
USE `madangdb`$$
CREATE  PROCEDURE `insertbook`(
	in mybookid integer,
    in mybookname varchar(40),
    in mypublisher varchar(40),
    in myprice integer)
BEGIN
	insert into Book(bookid, bookname, publisher, price)
		value(mybookid, mybookname, mypublisher, myprice);
END$$

DELIMITER ;
;

-- procefure registration end

call insertbook(13, '스포츠과학', '마당과학서적', 25000);
select * from Book;

USE `madangdb`;
DROP procedure IF EXISTS `BookInsertOrUpdate`;

USE `madangdb`;
DROP procedure IF EXISTS `madangdb`.`BookInsertOrUpdate`;
;

DELIMITER $$
USE `madangdb`$$
CREATE PROCEDURE `BookInsertOrUpdate`(
	 mybookid integer,
     mybookname varchar(40),
     mypublisher varchar(40),
     myprice integer)
BEGIN
	declare mycount integer;
    select count(*) into mycount from Book
		where bookname like mybookname;
	if mycount != 0 then
		set sql_safe_updates=0;
        update Book set price = myprice
			where bookname like mybookname;
	else
		insert into Book(bookid, bookname, publisher, price)
		value(mybookid, mybookname, mypublisher, myprice);
	end if;
END$$

DELIMITER ;
;
-- Book 
select * from Book;
call BookInsertOrUpdate(15, '스포츠 즐거움', '마당과학서점', '25000');
call BookInsertOrUpdate(16, '스포츠 즐거움', '마당과학서점', '30000');

-- AveragePrice procefure resigtration end
USE `madangdb`;
DROP procedure IF EXISTS `AveragePrice`;

DELIMITER $$
USE `madangdb`$$
CREATE PROCEDURE AveragePrice (
	out AverageVal integer)
BEGIN
	select avg(price) into AverageVal
    from Book where price is not null;
END$$

DELIMITER ;
-- AveragePrice procefure resigtration end
call AveragePrice(@myprice);
select @myprice;

-- interest procedure resigtration end

USE `madangdb`;
DROP procedure IF EXISTS `Interest`;

DELIMITER $$
USE `madangdb`$$
CREATE PROCEDURE Interest ()
BEGIN
	declare myInterest integer default 0.0;
    declare price integer;
    declare endOfRow boolean default false;
    declare interestCursor cursor for select saleprice from Orders;
    declare continue handler for not found set endOfRow=true;
    open interestCursor;
    cursor_loop : loop
		fetch interestCursor into price;
        if endOfRow then leave cursor_loop;
        end if;
        if price >= 30000 then
			set myInterest = myInterest + price * 0.1;
        else
			set myInterest = myInterest + price * 0.05;
		end if;
	end loop cursor_loop;
    close interestCursor;
    select concat('전체이익금액 =', myInterest);
END$$

DELIMITER ;

-- interest procedure resigtration end

call Interest();


