-- Last updated: 8/5/2026, 6:00:26 PM
# Write your MySQL query statement below
select c.name as Customers from Customers c 
left join Orders o on c.id = o.customerID where o.id is null;