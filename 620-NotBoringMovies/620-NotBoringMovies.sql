-- Last updated: 10/15/2026, 4:54:06 PM
# Write your MySQL query statement below
select * from Cinema 
where  id%2=1 and description != 'boring'
order by rating DESC;