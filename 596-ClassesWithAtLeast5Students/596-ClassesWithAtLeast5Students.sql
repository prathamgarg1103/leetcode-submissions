-- Last updated: 8/13/2026, 11:15:38 AM
# Write your MySQL query statement below
SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(student)>=5;