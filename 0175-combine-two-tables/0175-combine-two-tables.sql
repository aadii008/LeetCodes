# Write your MySQL query statement below
select firstName,lastName,city,state
from person as a
left join address as b 
on a.personId = b.personId;