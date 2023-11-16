import socket

# Create a socket object
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Connect to the server's IP and port
server_address = ('127.0.0.1', 12345)
client_socket.connect(server_address)

while True:
    choice = input("Press enter to request data from the server, or type 'exit' to quit: ")
    if choice == 'exit':
        client_socket.send('exit'.encode('utf-8'))
        break

    # Request data from the server
    client_socket.send('request_data'.encode('utf-8'))
    
    # Receive data from the server
    data_received = client_socket.recv(1024).decode('utf-8')
    print("Received:", data_received)

# Close the connection
client_socket.close()

