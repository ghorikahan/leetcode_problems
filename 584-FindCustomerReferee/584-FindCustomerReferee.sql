-- Last updated: 8/5/2026, 5:59:25 PM
# Write your MySQL query statement below
select name from Customer 
where referee_id is null or referee_id != 2;