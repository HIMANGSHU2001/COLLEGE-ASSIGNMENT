import socket

def find_address(student_name):
    try:
        with open('student_addresses.txt', 'r') as file:
            for line in file:
                name, address = line.strip().split(',')
                if name.lower() == student_name.lower():
                    return address
    except Exception as e:
        print("Error:", e)
    return "Address not found"

def main():
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    host = '127.0.0.1'
    port = 12345
    server_socket.bind((host, port))

    print(f"UDP server listening on {host}:{port}")

    while True:
        data, client_address = server_socket.recvfrom(1024)
        student_name = data.decode('utf-8')
        
        if student_name.lower() == 'exit':
            print("Client disconnected.")
            break
        
        address = find_address(student_name)
        server_socket.sendto(address.encode('utf-8'), client_address)

    server_socket.close()

if __name__ == '__main__':
    main()
