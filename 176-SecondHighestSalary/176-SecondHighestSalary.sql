-- Last updated: 8/5/2026, 6:00:31 PM
# Write your MySQL query statement below
select (
    select distinct salary from Employee
    order by salary desc limit 1,1
 ) as SecondHighestSalary;