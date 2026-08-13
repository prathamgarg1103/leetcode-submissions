-- Last updated: 8/13/2026, 11:17:24 AM
SELECT MAX(salary) AS SecondHighestSalary 
FROM Employee
WHERE salary<(SELECT MAX(salary) FROM Employee);