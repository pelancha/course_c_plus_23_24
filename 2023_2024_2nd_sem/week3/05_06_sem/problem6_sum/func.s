	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 13, 0	sdk_version 13, 3
	.globl	__Z3sumPiS_                     ; -- Begin function _Z3sumPiS_
	.p2align	2
__Z3sumPiS_:                            ; @_Z3sumPiS_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	str	x1, [sp]
	ldr	x8, [sp, #8]
	ldr	w8, [x8]
	ldr	x9, [sp]
	ldr	w9, [x9]
	add	w0, w8, w9
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
