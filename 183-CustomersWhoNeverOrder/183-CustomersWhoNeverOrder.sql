-- Last updated: 6/5/2026, 12:16:55 PM
# Write your MySQL query statement below
SELECT c.name AS Customers
FROM Customers c
LEFT JOIN Orders o ON
    c.id=o.customerId
WHERE o.customerId IS NULL;