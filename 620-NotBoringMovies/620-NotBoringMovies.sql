-- Last updated: 8/13/2026, 11:15:34 AM
# Write your MySQL query statement below
SELECT id,movie,description,rating
FROM Cinema
WHERE id % 2 = 1 AND description != "boring"
ORDER BY rating DESC;