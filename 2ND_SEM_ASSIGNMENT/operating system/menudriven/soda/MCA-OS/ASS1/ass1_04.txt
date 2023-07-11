echo "Enter the five digit number: "
read number 

temp=$number
rev=0

while [ $number -ne 0 ]
do
	rev=`expr \( $rev \* 10 \) + \( $number % 10 \)`
	number=`expr $number / 10`
done
echo "\nReverse of the digits of $temp : $rev"
