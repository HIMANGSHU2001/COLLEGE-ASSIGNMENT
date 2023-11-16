import socket

client=socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

IP_ADDR='localhost'     # localhost = '127.0.0.1'
port=8001
BUFF_SIZE=1024

#client.connect((IP_ADDR,port))
print("Connection to Server Successful.......")

ch=input("Enter your message : ")
print("")
client.sendto(ch.encode(),(IP_ADDR,port))
#client.send(ch.encode())
client.close()
