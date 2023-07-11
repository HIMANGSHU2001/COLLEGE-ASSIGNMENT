echo "Enter the five digit number:"
read num
num1=num
sum=0
count=0

while [ $num -ne 0 ]
do
    count=$((count+1))
    sum=`expr $sum + \( $num % 10 \)`
    num=`expr $num / 10`
done
if [ $count -le 5 ]
then
    echo "Digit does not contain 5 numbers "
else
    echo -n "Sum of digits : $sum"
fi

