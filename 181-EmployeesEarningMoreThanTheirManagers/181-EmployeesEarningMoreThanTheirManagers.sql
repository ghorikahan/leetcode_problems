-- Last updated: 8/5/2026, 6:00:29 PM
# Write your MySQL query statement below
select e.name as Employee from Employee e
join Employee v on e.managerid = v.id where e.salary>v.salary; 