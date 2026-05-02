create database school_db
use school_db

create table student(sid int ,
student_name varchar(20) ,
age int ,
class varchar(20) ,
address varchar(20), 
teacher_id int,
foreign key (teacher_id) references teacher(tid)
);
drop table student;

create table teacher (tid int primary key,
teacher_name varchar(20) NOT NULL,
subject varchar(20) NOT NULL,
email varchar(20) unique);
drop table teacher;

create database university;
use university;
create table courses(cid int primary key,
course_name varchar(20),
course_credits int);
alter table courses
add course_duration varchar(20);
alter table courses
drop course_credits;

create table departments (
    dept_id int primary key,
    dept_name varchar(50)
);
create table employees (
    emp_id int primary key,
    emp_name varchar(50),
    dept_id int,
    foreign key (dept_id) references departments(dept_id)
);
alter table employees
add salary int;
insert into courses values
(1,'software eng','1 year'),
(2,'data science','1.5 year'),
(3,'data analytics','2 year');



update courses
set course_duration='2 years'
where cid=1;

	insert into student values(1,'jiya',22,'8','shahibaug'),
	(2,'siya',12,'5','ranip'),
	(3,'tiya',18,'7','chandkheda'),
	(4,'priya',16,'6','cg_road'),
	(5,'riya',15,'9','nikol');
    
    insert into departments (dept_id, dept_name) values
(1, 'IT'),
(2, 'HR'),
(3, 'Finance'),
(4, 'Marketing');

insert into employees (emp_id, emp_name, dept_id, salary) values
(108, 'Riya', 1, 50000),
(109, 'Amit', 1, 40000),
(110, 'Neha', 4, 35000),
(111, 'Raj', 2, 32000),
(112, 'Kiran', 1, 45000);

create user 'user1'@'localhost' identified by'password1';
create user 'user2'@'localhost' identified by 'password2';
grant select on school_db.courses to 'user1'@'localhost';
flush privileges;
show grants for 'user1'@'localhost';
revoke insert on school_db.courses
from 'user1'@'localhost';
grant insert on school_db.courses
to 'user2'@'localhost';
flush privileges;
show grants for 'user1'@'localhost';
show grants for  'user2'@'localhost';
start transaction;
INSERT INTO courses (cid, course_name, course_duration)
VALUES
(201, 'AI', '2 years'),
(202, 'Cyber Security', '3 years'),
(203, 'Cloud Computing', '1.5 year');
COMMIT;
START TRANSACTION;	
INSERT INTO courses (cid, course_name, course_duration)
VALUES
(301, 'Machine Learning', '2 years'),
(302, 'Blockchain', '1 year');
rollback;
START TRANSACTION;
SAVEPOINT before_update;
UPDATE courses
SET course_duration = '5 years'
WHERE cid = 1;
ROLLBACK TO before_update;
COMMIT;

DELIMITER $$

create PROCEDURE GetEmployeesByDepartment(IN deptId INT)
begin
    select *
    from employees
    where dept_id = deptId;
end $$

DELIMITER ;
DELIMITER $$
alter table employees
add column last_modified timestamp;
create PROCEDURE GetCourseDetails(in c_id int)
begin
    select *
    from courses
    where cid = c_id;
end $$

DELIMITER ;

create view EmployeeDepartmentView as
select 
    e.emp_id,
    e.emp_name,
    e.salary,
    d.dept_name
from employees e
join departments d
on e.dept_id = d.dept_id;
create or replace view EmployeeDepartmentView as
select 
    e.emp_id,
    e.emp_name,
    e.salary,
    d.dept_name
from  employees e
join departments d
on e.dept_id = d.dept_id
where e.salary >= 50000;
create table employee_log (
    log_id int auto_increment primary key,
    emp_id int,
    emp_name varchar(50),
    action varchar(20),
    log_time timestamp default current_timestamp
);

DELIMITER $$

create trigger after_employee_insert
after insert on employees
for each row
begin
    insert into  employee_log (emp_id, action)
    values (new.emp_id, 'INSERT');
end $$

DELIMITER ;
DELIMITER $$


create trigger trg_employee_before_update
before update on  employees
for each row 
begin
    set new.last_modified = current_timestamp();
end $$
set SERVEROUTPUT on;

begin
    for emp_rec in (select emp_name from employees) loop
        DBMS_OUTPUT.PUT_LINE('Employee Name: ' || emp_rec.emp_name);
    end loop;
end;
/
set SERVEROUTPUT on;

begin
    FOR emp_rec in (select emp_name from employees) loop
        DBMS_OUTPUT.PUT_LINE('Employee Name: ' || emp_rec.emp_name);
end loop;
/

DELIMITER ;
update employees
set salary = 70000
where emp_id = 101;
 
 start  transaction;
insert into courses values (1, 'AI', '2 years');
savepoint sp1;
update courses set course_duration = '3 years' where cid = 1;
rollback to sp1;   
commit;           

select emp_id, last_modified from employees;
select * from EmployeeDepartmentView;
select * from EmployeeDepartmentView;
call GetCourseDetails(101);
call GetEmployeesByDepartment(1);
select * from student;
select student_name, age
from student;
select * from student where age>10;
select *from teacher;
select *from courses;
delete from courses where cid=1;
select course_name from courses;
select*from courses order by course_duration;
select*from courses limit 2;
select *from courses;
select e.emp_name, d.dept_name from employees e inner join departments d ON e.dept_id = d.dept_id;
select d.dept_name, e.emp_name from departments d left join employees e ON d.dept_id = e.dept_id;
select d.dept_name, COUNT(e.emp_id) AS total_employees FROM departments d LEFT JOIN employees e ON d.dept_id = e.dept_id GROUP BY d.dept_name;
select.dept_name, IFNULL(AVG(e.salary), 0) AS avg_salary FROM departments d LEFT JOIN employees e ON d.dept_id = e.dept_id GROUP BY d.dept_name;
select COUNT(*) as total_employees
from employees;