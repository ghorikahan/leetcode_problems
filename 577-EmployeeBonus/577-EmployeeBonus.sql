-- Last updated: 8/29/2026, 11:12:15 PM
# Write your MySQL query statement below
SELECT e.name,b.bonus
FROM Employee e
LEFT JOIN Bonus b
ON e.empID = b.empID
WHERE b.bonus<1000
OR b.bonus IS NULL;