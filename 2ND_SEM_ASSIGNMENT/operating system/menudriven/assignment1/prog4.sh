echo -n "Enter the 5 digit number:"
read num
rev=0
while [ $num -ne 0 ]
do
    rev=`expr $rev \* 10 + \( $num % 10 \)`
    num=`expr $num / 10`
done
echo -n "Reverse:"
echo $rev
