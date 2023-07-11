
if [ $# -lt 1 ]
then
echo "requires path as argument"
exit 
fi
if [ ! -d $1 ]
then
echo "Path Invalid!"
exit
fi 
echo "Usage in bytes: "
du -b $1
echo "Usage in KB: "
du -bk $1
echo "Usage in MB: "
du -bm $1
