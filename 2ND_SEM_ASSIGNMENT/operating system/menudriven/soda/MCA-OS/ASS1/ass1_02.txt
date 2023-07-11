echo "Enter the basic salary:"
read basic

da=`expr $basic \* 30 / 100`
echo "\nDearness allowance: $da"

hra=`expr $basic \* 25 / 100`
echo "\nHouse rent allowance: $hra"

net=`expr $basic + $da + $hra`
echo "\nNet payment: $net"
