while true
do

    echo "Enter a username"
    read username
    user_details=$(grep "^$username:" /etc/passwd)
    if [ -z "$user_details" ]; 
    then
        echo "Error: User '$username' does not exist"
    else
        break;
    fi
done
echo $user_details
username=$(echo $user_details | cut -d ":" -f1)
user_id=$(echo $user_details | cut -d ":" -f3)
group_id=$(echo $user_details | cut -d ":" -f4)
user_id_info=$(echo $user_details | cut -d ":" -f5)
home_dir=$(echo $user_details | cut -d ":" -f6)
login_shell=$(echo $user_details | cut -d ":" -f7)

echo "Username: ${username}"
echo "User ID: ${user-id}"
echo "Group ID: ${group_id}"
echo "User ID Info: ${user_id_info}"
echo "Home Directory: ${home_dir}"
echo "Login Shell: ${login_shell}"
