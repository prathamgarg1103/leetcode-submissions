-- Last updated: 8/13/2026, 11:15:52 AM
# Write your MySQL query statement below
SELECT E1.name
FROM Employee E1
JOIN Employee E2
ON E1.id = E2.managerId
GROUP BY E1.id, E1.name
HAVING COUNT(*) >= 5;