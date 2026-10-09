# Write your MySQL query statement below
Select *
From Cinema 
where id %2=1 AND description!='boring'
Group By id ,movie,description,rating
Order By rating desc;