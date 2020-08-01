#ifndef KernelOffsets_h
#define KernelOffsets_h

extern uint32_t* offsets;

enum kernel_offset {
    /* struct task */
    KSTRUCT_OFFSET_TASK_LCK_MTX_TYPE,
    KSTRUCT_OFFSET_TASK_REF_COUNT,
    KSTRUCT_OFFSET_TASK_ACTIVE,
    KSTRUCT_OFFSET_TASK_VM_MAP,
    KSTRUCT_OFFSET_TASK_NEXT,
    KSTRUCT_OFFSET_TASK_PREV,
    KSTRUCT_OFFSET_TASK_ITK_SPACE,
    KSTRUCT_OFFSET_TASK_BSD_INFO,
    KSTRUCT_OFFSET_TASK_ALL_IMAGE_INFO_ADDR,
    KSTRUCT_OFFSET_TASK_ALL_IMAGE_INFO_SIZE,
    KSTRUCT_OFFSET_TASK_TFLAGS,
    KSTRUCT_OFFSET_TASK_LOCK,

    /* struct ipc_port */
    KSTRUCT_OFFSET_IPC_PORT_IO_BITS,
    KSTRUCT_OFFSET_IPC_PORT_IO_REFERENCES,
    KSTRUCT_OFFSET_IPC_PORT_IKMQ_BASE,
    KSTRUCT_OFFSET_IPC_PORT_MSG_COUNT,
    KSTRUCT_OFFSET_IPC_PORT_IP_RECEIVER,
    KSTRUCT_OFFSET_IPC_PORT_IP_KOBJECT,
    KSTRUCT_OFFSET_IPC_PORT_IP_PREMSG,
    KSTRUCT_OFFSET_IPC_PORT_IP_CONTEXT,
    KSTRUCT_OFFSET_IPC_PORT_IP_SRIGHTS,

    /* struct proc */
    KSTRUCT_OFFSET_PROC_PID,
    KSTRUCT_OFFSET_PROC_P_FD,
    KSTRUCT_OFFSET_PROC_TASK,
    KSTRUCT_OFFSET_PROC_UCRED,
    KSTRUCT_OFFSET_PROC_P_LIST,
    KSTRUCT_OFFSET_PROC_P_CSFLAGS,
    KSTRUCT_OFFSET_PROC_P_MEMSTAT_STATE,
    KSTRUCT_OFFSET_PROC_MLOCK,
    KSTRUCT_OFFSET_PROC_UCRED_MLOCK,
    KSTRUCT_OFFSET_PROC_SVUID,
    KSTRUCT_OFFSET_PROC_SVGID,

    /* struct filedesc */
    KSTRUCT_OFFSET_FILEDESC_FD_OFILES,

    /* struct fileproc */
    KSTRUCT_OFFSET_FILEPROC_F_FGLOB,

    /* struct fileglob */
    KSTRUCT_OFFSET_FILEGLOB_FG_DATA,

    /* struct socket */
    KSTRUCT_OFFSET_SOCKET_SO_PCB,

    /* struct pipe */
    KSTRUCT_OFFSET_PIPE_BUFFER,

    /* struct ipc_space */
    KSTRUCT_OFFSET_IPC_SPACE_IS_TABLE_SIZE,
    KSTRUCT_OFFSET_IPC_SPACE_IS_TABLE,

    /* struct vnode */
    KSTRUCT_OFFSET_VNODE_V_MOUNT,
    KSTRUCT_OFFSET_VNODE_VU_SPECINFO,
    KSTRUCT_OFFSET_VNODE_V_LOCK,
    KSTRUCT_OFFSET_VNODE_V_DATA,

    /* struct specinfo */
    KSTRUCT_OFFSET_SPECINFO_SI_FLAGS,

    /* struct mount */
    KSTRUCT_OFFSET_MOUNT_MNT_FLAG,
    KSTRUCT_OFFSET_MOUNT_MNT_DATA,
    KSTRUCT_OFFSET_MOUNT_MNT_MLOCK,

    /* struct host */
    KSTRUCT_OFFSET_HOST_SPECIAL,
    
    /* struct ucred */
    KSTRUCT_OFFSET_UCRED_CR_REF,
    KSTRUCT_OFFSET_UCRED_CR_UID,
    KSTRUCT_OFFSET_UCRED_CR_RUID,
    KSTRUCT_OFFSET_UCRED_CR_SVUID,
    KSTRUCT_OFFSET_UCRED_CR_NGROUPS,
    KSTRUCT_OFFSET_UCRED_CR_GROUPS,
    KSTRUCT_OFFSET_UCRED_CR_RGID,
    KSTRUCT_OFFSET_UCRED_CR_SVGID,
    KSTRUCT_OFFSET_UCRED_CR_GMUID,
    KSTRUCT_OFFSET_UCRED_CR_FLAGS,
    KSTRUCT_OFFSET_UCRED_CR_LABEL,
    
    /* struct label */
    KSTRUCT_OFFSET_LABEL_L_FLAGS,
    KSTRUCT_OFFSET_LABEL_L_PERPOLICY,
    
    /* struct ipc_entry */
    KSTRUCT_SIZE_IPC_ENTRY,
    KSTRUCT_OFFSET_IPC_ENTRY_IE_BITS,
    
    /* struct vnode */
    KSTRUCT_OFFSET_VNODE_V_FLAG,
    
    /* vtable OSDictionary */
    KVTABLE_OFFSET_OSDICTIONARY_SETOBJECTWITHCHARP,
    KVTABLE_OFFSET_OSDICTIONARY_GETOBJECTWITHCHARP,
    KVTABLE_OFFSET_OSDICTIONARY_MERGE,
    
    /* vtable OSArray */
    KVTABLE_OFFSET_OSARRAY_MERGE,
    KVTABLE_OFFSET_OSARRAY_REMOVEOBJECT,
    KVTABLE_OFFSET_OSARRAY_GETOBJECT,
    
    /* vtable OSObject */
    KVTABLE_OFFSET_OSOBJECT_RELEASE,
    KVTABLE_OFFSET_OSOBJECT_GETRETAINCOUNT,
    KVTABLE_OFFSET_OSOBJECT_RETAIN,
    
    /* vtable OSString */
    KVTABLE_OFFSET_OSSTRING_GETLENGTH,
    
    KFREE_ADDR_OFFSET,
};

uint32_t koffset(enum kernel_offset offset);

#endif
