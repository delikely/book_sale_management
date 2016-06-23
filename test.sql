create database book  default charset utf8;
use book;
CREATE TABLE book(name VARCHAR (20),ISBN VARCHAR(20), press VARCHAR(20), price FLOAT,  repertoryNum INT, soldNum INT);  /*库存与已售*/
INSERT INTO book VALUES('高数','978-7-04-021277-8','高等教育出版社','29.4','200','200');  
INSERT INTO book VALUES('linux系统','978-7-302-28631-8','清华大学出版社','29','200','200');  
INSERT INTO book VALUES('信息系统安全概论','978-7-121-22143-9','电子工业出版社','43','250','250');
INSERT INTO book VALUES('java程序设计','978-7-121-14913-9','电子工业出版社','35','300', '300');  
