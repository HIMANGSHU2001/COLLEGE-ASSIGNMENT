cpuinfo=$(cat /proc/cpuinfo | head -9)
echo "\nVendor ID:$(echo "$cpuinfo" | grep "vendor_id" | cut -d ":" -f 2)"
echo "Model name:$(echo "$cpuinfo" | grep "model name" | cut -d ":" -f 2)"
echo "CPU MHr:$(echo "$cpuinfo" | grep "cpu MHz" | cut -d ":" -f 2)"
echo "Cache size:$(echo "$cpuinfo" | grep "cache size" | cut -d ":" -f 2)"

