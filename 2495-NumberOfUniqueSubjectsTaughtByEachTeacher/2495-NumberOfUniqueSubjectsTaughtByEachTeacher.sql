-- Last updated: 8/13/2026, 11:13:32 AM
# Write your MySQL query statement below
SELECT teacher_id,COUNT(DISTINCT subject_id ) AS cnt
FROM Teacher 
GROUP BY (teacher_id);