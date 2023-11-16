import socket
import operator
operators = {
    '+': operator.add,
    '-': operator.sub,
    '*': operator.mul,
    '/': operator.truediv
}

def infix_to_postfix(expression):
    precedence = {'+': 1, '-': 1, '*': 2, '/': 2}
    output = []
    stack = []

    for token in expression.split():
        if token.isdigit():
            output.append(token)
        elif token in operators:
            while (stack and stack[-1] in operators and
                   precedence[stack[-1]] >= precedence[token]):
                output.append(stack.pop())
            stack.append(token)
        elif token == '(':
            stack.append(token)
        elif token == ')':
            while stack and stack[-1] != '(':
                output.append(stack.pop())
            stack.pop()

    while stack:
        output.append(stack.pop())

    return ' '.join(output)

def evaluate_postfix(expression):
    stack = []

    for token in expression.split():
        if token.isdigit():
            stack.append(int(token))
        elif token in operators:
            operand2 = stack.pop()
            operand1 = stack.pop()
            operation = operators[token]
            result = operation(operand1, operand2)
            stack.append(result)

    return stack[0]

def evaluate_infix(expression):
    postfix_expression = infix_to_postfix(expression)
    result = evaluate_postfix(postfix_expression)
    return result
def main():
    host = '127.0.0.1'
    port = 12345
    
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_socket.bind((host, port))
    server_socket.listen(1)
    print(f"Server listening on {host}:{port}")
    
    while True:
        client_socket, client_address = server_socket.accept()
        print(f"Connection from {client_address}")
        
        data = client_socket.recv(1024).decode()
        print(f"Received data: {data}")
        result = evaluate_infix(data)
        client_socket.send(str(result).encode())
        
        client_socket.close()

if __name__ == "__main__":
    main()

