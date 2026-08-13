-- Last updated: 8/13/2026, 11:13:59 AM
# Write your MySQL query statement below
SELECT contest_id , ROUND(COUNT(user_id) * 100 /(SELECT COUNT(*) FROM Users),2) AS percentage
FROM Register
GROUP BY contest_id  

ORDER BY percentage DESC,contest_id;