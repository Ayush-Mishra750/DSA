# Write your MySQL query statement below
Select e1.name
From Employee e1
Left join Employee e2
ON e1.id=e2.managerId
Group By e1.id
Having count(*)>=5

