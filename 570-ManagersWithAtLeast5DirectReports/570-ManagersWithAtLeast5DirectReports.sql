-- Last updated: 10/15/2026, 4:54:13 PM
SELECT m.name
FROM Employee e
JOIN Employee m 
ON e.managerId = m.id
GROUP BY m.id, m.name
HAVING COUNT(e.id) >= 5;