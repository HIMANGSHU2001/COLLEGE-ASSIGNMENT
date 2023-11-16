import socket

def main():
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    host = '127.0.0.1'
    port = 12345

    print("UDP client running.")

    while True:
        student_name = input("Enter student's name (or 'exit' to quit): ")
        client_socket.sendto(student_name.encode('utf-8'), (host, port))
        
        if student_name.lower() == 'exit':
            print("Exiting.")
            break
        
        address, server_address = client_socket.recvfrom(1024)
        print(f"Permanent address of {student_name}: {address.decode('utf-8')}")

    client_socket.close()

if __name__ == '__main__':
    main()
