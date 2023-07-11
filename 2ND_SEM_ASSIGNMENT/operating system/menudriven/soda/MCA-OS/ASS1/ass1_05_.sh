file="/etc/passwd"

read login_name
echo "Enter the user login name: " $login_name

detail_info=$(grep $login_name $file)

IFS=':' read -a arr_split <<< "$detail_info"

fields=(
	"Username"
	"Password"
	"User Id"
	"Group Id"
	"User Id Info"
	"Home Directory"
	"Login Shell"
	)

echo -e "\nDetailed user login information of user $login_name:"

for i in {0..6}
do
	echo "${fields[$i]}: ${arr_split[$i]}"
done
