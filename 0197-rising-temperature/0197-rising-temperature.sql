# Write your MySQL query statement below
select id from Weather w
where temperature >
(select temperature from Weather r  where DATE_SUB(w.recordDate,INTERVAL 1 DAY) =r.recordDate);