-- Last updated: 6/5/2026, 12:16:56 PM
SELECT email
FROM Person
GROUP BY email
HAVING COUNT(email) > 1;