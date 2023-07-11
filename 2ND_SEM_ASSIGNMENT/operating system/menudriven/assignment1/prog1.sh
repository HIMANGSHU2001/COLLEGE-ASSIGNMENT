echo "Enter the length of the rectangle:"
read length
echo -n "Enter the breadth of the rectangle:"
read breadth
area=`expr $length \* $breadth`
echo -n " Area of the rectangle:"
echo $area
perimeter=`expr $length \+ $breadth`
perimeter=`expr 2 \* $perimeter`
echo -n "Perimeter of the rectangle:"
echo $perimeter


