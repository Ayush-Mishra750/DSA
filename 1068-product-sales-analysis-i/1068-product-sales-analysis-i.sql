# Write your MySQL query statement below
SELECT s.year,s.price ,p.product_name
From Sales AS s
INNER JOIN
 Product AS p
ON s.product_id=p.product_id;