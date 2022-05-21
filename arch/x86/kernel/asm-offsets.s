	.text
	.file	"asm-offsets.c"
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
# %bb.0:
	callq	__fentry__
	pushq	%rbp
	movq	%rsp, %rbp
	andq	$-8, %rsp
	#APP
	
.ascii "->"
	#NO_APP
	#APP
	
.ascii "->pt_regs_bx $40 offsetof(struct pt_regs, bx)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_cx $88 offsetof(struct pt_regs, cx)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_dx $96 offsetof(struct pt_regs, dx)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_sp $152 offsetof(struct pt_regs, sp)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_bp $32 offsetof(struct pt_regs, bp)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_si $104 offsetof(struct pt_regs, si)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_di $112 offsetof(struct pt_regs, di)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_r8 $72 offsetof(struct pt_regs, r8)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_r9 $64 offsetof(struct pt_regs, r9)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_r10 $56 offsetof(struct pt_regs, r10)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_r11 $48 offsetof(struct pt_regs, r11)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_r12 $24 offsetof(struct pt_regs, r12)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_r13 $16 offsetof(struct pt_regs, r13)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_r14 $8 offsetof(struct pt_regs, r14)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_r15 $0 offsetof(struct pt_regs, r15)"
	#NO_APP
	#APP
	
.ascii "->pt_regs_flags $144 offsetof(struct pt_regs, flags)"
	#NO_APP
	#APP
	
.ascii "->"
	#NO_APP
	#APP
	
.ascii "->saved_context_cr0 $200 offsetof(struct saved_context, cr0)"
	#NO_APP
	#APP
	
.ascii "->saved_context_cr2 $208 offsetof(struct saved_context, cr2)"
	#NO_APP
	#APP
	
.ascii "->saved_context_cr3 $216 offsetof(struct saved_context, cr3)"
	#NO_APP
	#APP
	
.ascii "->saved_context_cr4 $224 offsetof(struct saved_context, cr4)"
	#NO_APP
	#APP
	
.ascii "->saved_context_gdt_desc $267 offsetof(struct saved_context, gdt_desc)"
	#NO_APP
	#APP
	
.ascii "->"
	#NO_APP
	#APP
	
.ascii "->"
	#NO_APP
	#APP
	
.ascii "->stack_canary_offset $40 offsetof(struct fixed_percpu_data, stack_canary)"
	#NO_APP
	#APP
	
.ascii "->"
	#NO_APP
	xorl	%eax, %eax
	movq	%rbp, %rsp
	popq	%rbp
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
                                        # -- End function
	.p2align	4, 0x90                         # -- Begin function common
	.type	common,@function
common:                                 # @common
# %bb.0:
	callq	__fentry__
	#APP
	
.ascii "->"
	#NO_APP
	#APP
	
.ascii "->TASK_threadsp $3736 offsetof(struct task_struct, thread.sp)"
	#NO_APP
	#APP
	
.ascii "->TASK_stack_canary $1448 offsetof(struct task_struct, stack_canary)"
	#NO_APP
	#APP
	
.ascii "->"
	#NO_APP
	#APP
	
.ascii "->crypto_tfm_ctx_offset $24 offsetof(struct crypto_tfm, __crt_ctx)"
	#NO_APP
	#APP
	
.ascii "->"
	#NO_APP
	#APP
	
.ascii "->pbe_address $0 offsetof(struct pbe, address)"
	#NO_APP
	#APP
	
.ascii "->pbe_orig_address $8 offsetof(struct pbe, orig_address)"
	#NO_APP
	#APP
	
.ascii "->pbe_next $16 offsetof(struct pbe, next)"
	#NO_APP
	#APP
	
.ascii "->"
	#NO_APP
	#APP
	
.ascii "->IA32_SIGCONTEXT_ax $44 offsetof(struct sigcontext_32, ax)"
	#NO_APP
	#APP
	
.ascii "->IA32_SIGCONTEXT_bx $32 offsetof(struct sigcontext_32, bx)"
	#NO_APP
	#APP
	
.ascii "->IA32_SIGCONTEXT_cx $40 offsetof(struct sigcontext_32, cx)"
	#NO_APP
	#APP
	
.ascii "->IA32_SIGCONTEXT_dx $36 offsetof(struct sigcontext_32, dx)"
	#NO_APP
	#APP
	
.ascii "->IA32_SIGCONTEXT_si $20 offsetof(struct sigcontext_32, si)"
	#NO_APP
	#APP
	
.ascii "->IA32_SIGCONTEXT_di $16 offsetof(struct sigcontext_32, di)"
	#NO_APP
	#APP
	
.ascii "->IA32_SIGCONTEXT_bp $24 offsetof(struct sigcontext_32, bp)"
	#NO_APP
	#APP
	
.ascii "->IA32_SIGCONTEXT_sp $28 offsetof(struct sigcontext_32, sp)"
	#NO_APP
	#APP
	
.ascii "->IA32_SIGCONTEXT_ip $56 offsetof(struct sigcontext_32, ip)"
	#NO_APP
	#APP
	
.ascii "->"
	#NO_APP
	#APP
	
.ascii "->IA32_RT_SIGFRAME_sigcontext $164 offsetof(struct rt_sigframe_ia32, uc.uc_mcontext)"
	#NO_APP
	#APP
	
.ascii "->"
	#NO_APP
	#APP
	
.ascii "->BP_scratch $484 offsetof(struct boot_params, scratch)"
	#NO_APP
	#APP
	
.ascii "->BP_secure_boot $492 offsetof(struct boot_params, secure_boot)"
	#NO_APP
	#APP
	
.ascii "->BP_loadflags $529 offsetof(struct boot_params, hdr.loadflags)"
	#NO_APP
	#APP
	
.ascii "->BP_hardware_subarch $572 offsetof(struct boot_params, hdr.hardware_subarch)"
	#NO_APP
	#APP
	
.ascii "->BP_version $518 offsetof(struct boot_params, hdr.version)"
	#NO_APP
	#APP
	
.ascii "->BP_kernel_alignment $560 offsetof(struct boot_params, hdr.kernel_alignment)"
	#NO_APP
	#APP
	
.ascii "->BP_init_size $608 offsetof(struct boot_params, hdr.init_size)"
	#NO_APP
	#APP
	
.ascii "->BP_pref_address $600 offsetof(struct boot_params, hdr.pref_address)"
	#NO_APP
	#APP
	
.ascii "->"
	#NO_APP
	#APP
	
.ascii "->PTREGS_SIZE $168 sizeof(struct pt_regs)"
	#NO_APP
	#APP
	
.ascii "->TLB_STATE_user_pcid_flush_mask $22 offsetof(struct tlb_state, user_pcid_flush_mask)"
	#NO_APP
	#APP
	
.ascii "->CPU_ENTRY_AREA_entry_stack $4096 offsetof(struct cpu_entry_area, entry_stack_page)"
	#NO_APP
	#APP
	
.ascii "->SIZEOF_entry_stack $4096 sizeof(struct entry_stack)"
	#NO_APP
	#APP
	
.ascii "->MASK_entry_stack $-4096 (~(sizeof(struct entry_stack) - 1))"
	#NO_APP
	#APP
	
.ascii "->TSS_sp0 $4 offsetof(struct tss_struct, x86_tss.sp0)"
	#NO_APP
	#APP
	
.ascii "->TSS_sp1 $12 offsetof(struct tss_struct, x86_tss.sp1)"
	#NO_APP
	#APP
	
.ascii "->TSS_sp2 $20 offsetof(struct tss_struct, x86_tss.sp2)"
	#NO_APP
	retq
.Lfunc_end1:
	.size	common, .Lfunc_end1-common
                                        # -- End function
	.ident	"Ubuntu clang version 12.0.1-++20211102090516+fed41342a82f-1~exp1~20211102211019.11"
	.section	".note.GNU-stack","",@progbits
