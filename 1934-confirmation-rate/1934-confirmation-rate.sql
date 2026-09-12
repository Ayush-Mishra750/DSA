# Write your MySQL query statement below
SELECT s.user_id ,
   ROUND(
    AVG(
        CASE
            WHEN c.action='confirmed' THEN 1.00
             ELSE 0
        END
       ),
           2
        ) confirmation_rate
From Signups as s
left join
Confirmations c
On s.user_id=c.user_id
Group By
s.user_id
