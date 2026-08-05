-- Last updated: 8/5/2026, 5:58:18 PM
# Write your MySQL query statement below
select EmployeeUNI.unique_id,Employees.name from Employees
left join EmployeeUNI on Employees.id = EmployeeUNI.id;