echo "Enter Basic Salary:"
read basic_salary
hra=`expr $basic_salary \* 1 / 5`
da=`expr $basic_salary \* 2 / 15`
net_salary=`expr $hra + $da + $basic_salary`
echo -n "House Rent Allowance(hra):"
echo $hra
echo -n "Dearness Allowance(da):"
echo $da
echo -n "Basic salary:"
echo $basic_salary
echo -n "Net Salary"
echo $net_salary
