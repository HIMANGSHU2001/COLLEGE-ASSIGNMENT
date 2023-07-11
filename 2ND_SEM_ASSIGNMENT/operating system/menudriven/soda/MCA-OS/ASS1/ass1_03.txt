echo "Enter the five digit number: "
read number 

temp=$number
sum=0

while [ $number -ne 0 ]
do

	sum=`expr $sum + \( $number % 10 \)`
	number=`expr $number / 10`
done
echo "\n Sum of the digits of $temp: $sum"
