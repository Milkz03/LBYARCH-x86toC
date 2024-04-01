section .data

section .text
bits  64
default rel

global mulasm

mulasm:
	MULSS XMM0, XMM1
	ADDSS XMM0, XMM2
	ret
