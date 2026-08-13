-- Last updated: 8/13/2026, 11:15:44 AM
# Write your MySQL query statement below
SELECT name
FROM Customer
WHERE referee_id !=2 OR referee_id IS null;