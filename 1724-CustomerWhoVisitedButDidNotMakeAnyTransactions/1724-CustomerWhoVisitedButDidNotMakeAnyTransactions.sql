-- Last updated: 8/13/2026, 11:14:08 AM
SELECT V.customer_id,COUNT(*) AS count_no_trans
FROM Visits V LEFT JOIN Transactions T
ON V.visit_id = T.visit_id
WHERE T.transaction_id IS NULL
GROUP BY V.customer_id;