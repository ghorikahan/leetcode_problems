-- Last updated: 8/5/2026, 5:58:43 PM
# Write your MySQL query statement below
select Product.product_name,Sales.year,Sales.price from Sales
left join Product on Sales.product_id = Product.product_id;