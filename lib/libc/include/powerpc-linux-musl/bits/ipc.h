struct ipc_perm {
	key_t __ipc_perm_key;
	uid_t uid;
	gid_t gid;
	uid_t cuid;
	gid_t cgid;
	mode_t mode;
	int __ipc_perm_seq;
	int __pad1;
	long long __pad2;
	long long __pad3;
};

#define IPC_64 0x100