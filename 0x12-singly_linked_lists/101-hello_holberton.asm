fmt:	 db "Hello, Holberton",0
format: db "%s", 10, 0

	global main

main:
	push rbp
	mov rdi, format
	mov rsi, fmt
	mov rax, 0
	call printf
	pop rbp
	mov rax, 0
	ret

extern printf
