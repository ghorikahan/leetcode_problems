-- Last updated: 8/5/2026, 6:00:34 PM
# Write your MySQL query statement below
select p.firstName,p.lastName,a.city,a.state from Person p 
left join Address a on p.personID = a.personID;