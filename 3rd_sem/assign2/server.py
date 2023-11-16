import socket

# Create a socket object
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Bind the socket to a specific address and port
server_address = ('127.0.0.1', 12345)
server_socket.bind(server_address)

# Listen for incoming connections
server_socket.listen(5)
print("Waiting for a connection...")

# Accept a connection from a client
client_socket, client_address = server_socket.accept()
print("Connected to:", client_address)

while True:
    # Receive data from the client
    request = client_socket.recv(1024).decode('utf-8')

    if request == 'request_data':
        # Send data to the client
        data_to_send = "Hello, client! This is the server."
        client_socket.send(data_to_send.encode('utf-8'))
    elif request == 'exit':
        print("Client requested to exit.")
        break

# Close the connection
client_socket.close()
server_socket.close()

