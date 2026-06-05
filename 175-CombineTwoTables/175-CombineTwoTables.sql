-- Last updated: 6/5/2026, 12:16:58 PM
# Write your MySQL query statement below
SELECT p.firstName,p.lastName,a.city,a.state
FROM Person p
LEFT JOIN Address a ON
    p.personId=a.personId;