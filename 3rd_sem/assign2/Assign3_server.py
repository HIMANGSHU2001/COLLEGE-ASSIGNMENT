import socket


IP_ADDR='localhost'   #localhost='127.0.0.1'
port=8001
BUFF_SIZE=1024

server=socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)
print("Server creation successful")

server.bind((IP_ADDR,port))
#server.listen(2)

while True:
    client,addr=server.recvfrom(1000)
    print("Connected with: ", addr)
    ch=client.decode()
    print(ch)
