while [ true ]
do
    echo "press 0 for exit"
    echo "press 1 for Assignment 1"
    echo "Press 2 for Assignment 2"
    echo "Press 3 for Assignment 3"
    echo "Press 4 Assignment 4"
    
    
    echo -n "Enter your choice : "
    read choice
    echo "You Chose $choice"
    case $choice in 
    
        1) cd /home/user1/Himangshu3009/menudriven/assignment1
        echo "You are in Assignment 1"
        echo "Assignments under Assignment 1- \n assign1\n assign2\n assign3\n assign4\n assign5"
            echo -n "Enter program number to execute: "
            read num
            name=prog$num.sh
            chmod +x $name
            sh $name
            ;;
         
        2) cd /home/user1/Himangshu3009/menudriven/assignment2
                echo "You are in Assignment 2"
                echo "Assignments under Assignment 2- \n assign1\n assign2\n assign3\n assign4\n assign5"
            echo -n "Enter program number to execute: "
            read num
            name=prog$num.sh
            chmod +x $name
            sh $name
            ;;
        3) cd /home/user1/Himangshu3009/menudriven/assignment3
                echo "You are in Assignment 3"
                echo "Assignments under Assignment 4- \n assign1\n assign2\n assign3\n assign4\n assign5"
            echo -n "Enter program number to execute: "
            read num
            name=prog$num.sh
            chmod +x $name
            sh $name
            ;;
        4) cd /home/user1/Himangshu3009/menudriven/assignment4
                echo "You are in Assignment 4"
                echo "Assignments under Assignment 4- \n assign1\n assign2\n assign3\n assign4\n assign5"
            echo -n "Enter program number to execute: "
            read num
            name=prog$num.sh
            chmod +x $name
            sh $name
            ;;
            
        0) echo " "
        exit 0 ;;
        *) echo "Invalid Choice,Try agian ....";;
     esac
done
