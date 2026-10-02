.global array_sum

	
	
array_sum:

mov $0, %rcx #loop index
mov $0, %rax #loop accumulator
	
sum:	
	
  cmpq %rsi, %rcx  # rsi is index from array , rcx is loop index
  jge total

  movslq (%rdi,%rcx,4), %rdx
	
  addq %rdx,%rax

  incq %rcx	

  jmp sum


	
total:
ret 








	
