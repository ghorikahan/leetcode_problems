-- Last updated: 8/5/2026, 5:57:36 PM
# Write your MySQL query statement below
select tweet_id from Tweets 
where length(content) > 15;