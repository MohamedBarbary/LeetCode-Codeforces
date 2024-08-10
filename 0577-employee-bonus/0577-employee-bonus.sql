select name , bonus from employee e left join Bonus b on 
e.empid = b.empid where b.bonus <1000 || b.bonus is null ;