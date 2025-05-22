SELECT p.firstName , p.lastName , d.city , d.state
FROM person p , address d
WHERE p.personId = d.personId (+);
