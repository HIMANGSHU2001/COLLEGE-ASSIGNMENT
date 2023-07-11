echo "Enter the length of the rectangle:"
read length
echo $length

echo "Enter the breadth of the rectangle:"
read breadth
echo $breadth

area=`expr $length \* $breadth`
echo "\narea of the rectangle: $area"
temp=`expr $length + $breadth`
perimeter=`expr 2 \* $temp`
echo "\nperimeter of the rectangle: $perimeter"

