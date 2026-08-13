-- Last updated: 8/13/2026, 11:14:44 AM
# Write your MySQL query statement below
SELECT customer_id 
FROM Customer 
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key)=(SELECT COUNT(*) FROM Product);