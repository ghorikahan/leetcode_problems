-- Last updated: 9/12/2026, 1:06:23 PM
# Write your MySQL query statement below
select EmployeeUNI.unique_id,Employees.name from Employees
left join EmployeeUNI on Employees.id = EmployeeUNI.id;