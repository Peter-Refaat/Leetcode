SELECT name AS Customers
FROM customers c , orders d
WHERE c.id = d.customerId (+) AND d.id IS NULL;
