-- Last updated: 8/13/2026, 10:37:19 AM
# Write your MySQL query statement below
select distinct author_id as id from Views 
where author_id = viewer_id
order by id;