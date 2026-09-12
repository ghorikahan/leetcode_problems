-- Last updated: 9/12/2026, 1:06:50 PM
# Write your MySQL query statement below
select distinct author_id as id from Views 
where author_id = viewer_id
order by id;