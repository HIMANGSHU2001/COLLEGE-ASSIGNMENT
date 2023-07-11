os_ver=$(cat /etc/os-release |grep PRETTY_NAME | cut -d "\"" -f 2)
echo "\nHome directory: $HOME"
echo "Operating System type: $(uname -o)"
echo "Operating System version: $os_ver"
echo "Release number: $(uname -r)"
echo "Kernel version: $(uname -v)"
echo "PATH: $PATH"
