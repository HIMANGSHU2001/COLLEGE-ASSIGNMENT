for file in *; do
    if( [ -f $file ] )
    then
        echo "$file is a regular file"
    elif( [ -d $file ] )
    then
        echo "$file is a directory"
    else
        echo "$file is not a regular file or directory"
    fi
done
