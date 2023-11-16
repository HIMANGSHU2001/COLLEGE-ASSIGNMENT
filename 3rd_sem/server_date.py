import socket
import time
#create a socket object
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

#bind the port
server_socket.bind(('127.0.0.1', 12345))

#queue upto 5 request
server_socket.listen(5)
while True:
	print("Waiting for connection")
	#establish a connection
	client_socket, addr = server_socket.accept()
	print("Got a connection from %s" %str(addr))
	currentTime = time.ctime(time.time()) + "\r\n"
	try:
		client_socket.send(currentTime.encode('ascii'))
	except:
		print("Exited by the user")
	client_socket.close()
server_socket.close();
	

