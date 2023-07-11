while true
do
	echo -n "Enter username: "
	read user
	i=`grep -w "$user" /etc/passwd`
	if [ -z "$i" ]
	then
		echo -n "Not found."
	else
		break
	fi
done
echo -n "Username: "
grep $user /etc/passwd | cut -d ":" -f1
echo -n "Password: "
grep $user /etc/passwd | cut -d ":" -f2
echo -n "User_Id: "
grep $user /etc/passwd | cut -d ":" -f3
echo -n "Group_Id: "
grep $user /etc/passwd | cut -d ":" -f4
echo -n "User_Id Info: "
grep $user /etc/passwd | cut -d ":" -f5
echo -n "Home Directory: "
grep $user /etc/passwd | cut -d ":" -f6
echo -n "Login Shell: "
grep $user /etc/passwd | cut -d ":" -f7

