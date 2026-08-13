-- Last updated: 8/13/2026, 11:14:17 AM
# Write your MySQL query statement below
SELECT unique_id,name
FROM Employees E LEFT JOIN EmployeeUNI U
ON E.id=U.id