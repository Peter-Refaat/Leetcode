SELECT e.name , b.bonus
FROM employee e , bonus b
WHERE e.empId  = b.empId (+) AND (b.bonus < 1000 OR b.bonus IS NULL);
