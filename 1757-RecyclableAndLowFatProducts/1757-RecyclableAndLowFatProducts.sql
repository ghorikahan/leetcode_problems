-- Last updated: 9/12/2026, 1:05:01 PM
# Write your MySQL query statement below
select p.product_id from Products p
where p.low_fats='Y' and p.recyclable ='Y';