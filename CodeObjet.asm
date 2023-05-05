
TITLE : sta

PILE SEGMENT stack
		100 DD dup (?)
PILE ENDS

DATA SEGMENT
	i DW 0
	c DW 0
	j DW 0
	m DW 0
	n DW 0
DATA ENDS

CODE SEGMENT
BEGIN:
		ASSUME SS: PILE, DS: DATA, CS: CODE
			Mov AX,DATA
			Mov DX,AX

			MOV AX,100
			MOV m,AX
			MOV AX,50
			MOV n,AX
			MOV AX,i
			MOV BX,n
			CMP AX,BX
			JG etiq[ 6 ]
etiq [ 3 ] : 
			MOV AX,1
			PUSH AX
			JMP etiq[ 7 ]
			MOV AX,0
			PUSH AX
etiq [ 6 ] : 
			POP AX
			CMP AX,0
			JE etiq[ 26 ]
etiq [ 7 ] : 
			JMP etiq[ 11 ]
			MOV AX,0
			ADD AX,1
			PUSH AX
etiq [ 9 ] : 
			JMP etiq[ 3 ]
			MOV AX,c
			ADD AX,i
			PUSH AX
etiq [ 11 ] : 
			MOV AX,j
			MOV BX,m
			CMP AX,BX
			JG etiq[ 17 ]
			MOV AX,1
			PUSH AX
etiq [ 14 ] : 
			JMP etiq[ 18 ]
			MOV AX,0
			PUSH AX
			POP AX
			CMP AX,0
			JE etiq[ 25 ]
etiq [ 17 ] : 
			JMP etiq[ 22 ]
etiq [ 18 ] : 
			MOV AX,2
			ADD AX,1
			PUSH AX
			JMP etiq[ 14 ]
etiq [ 20 ] : 
			POP AX
			ADD AX,j
			PUSH AX
			POP AX
			MOV c,AX
etiq [ 22 ] : 
			JMP etiq[ 20 ]
			JMP etiq[ 9 ]
CODE ENDS
END BEGIN
