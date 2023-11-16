import socket
#create a socket object
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

#connection to hostname on the port
client_socket.connect(('127.0.0.1', 12345))
data = client_socket.recv(1024) #receive the data from the server
client_socket.close()
print("The time got from the server is %s" %data.decode('ascii'))
