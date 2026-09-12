-- Last updated: 9/12/2026, 1:05:17 PM
# Write your MySQL query statement below
select tweet_id from Tweets 
where length(content) > 15;