-- Last updated: 8/13/2026, 11:13:55 AM
# Write your MySQL query statement below
SELECT tweet_id
FROM Tweets
WHERE LENGTH(content)>15;