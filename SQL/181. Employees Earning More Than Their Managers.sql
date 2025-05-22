SELECT e.name AS Employee
FROM employee e , employee m
WHERE e.managerId = m.id AND e.salary > m.salary;
