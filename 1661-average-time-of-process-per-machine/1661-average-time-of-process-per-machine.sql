# Write your MySQL query statement below
select a1.machine_id ,
  Round(AVG(a2.timestamp-a1.timestamp),3) AS processing_time
             from Activity a1,Activity a2
where a1.machine_id = a2.machine_id  and a1.process_id =a2.process_id 
             and a2.timestamp>a1.timestamp      
                         group by a1.machine_id;