-- Last updated: 9/12/2026, 1:06:59 PM
# Write your MySQL query statement below
select Product.product_name,Sales.year,Sales.price from Sales
left join Product on Sales.product_id = Product.product_id;