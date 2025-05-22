SELECT DISTINCT i.email AS Email
FROM person i , person e
WHERE i.id = e.id AND i.email IN (SELECT i.email FROM person i , person e WHERE i.id != e.id AND i.email = e.email)

--OR--

SELECT email AS Email
FROM person
GROUP BY email
HAVING COUNT(email) > 1;
