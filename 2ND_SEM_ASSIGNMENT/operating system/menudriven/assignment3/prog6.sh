count=$(find . -maxdepth 1 -type f -name "*.sh" | wc -l)
echo "There are $count shell scripts in the current directory"
