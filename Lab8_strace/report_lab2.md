# Отчет по лабораторной работе 8

## Yunusov Rustam М8О-310Б-22

### Пример работы
#### Лабораторная работа 2 – threads

```bash
execve("./l2", ["./l2", "2"], 0x7ffff0c825b8 /* 27 vars */) = 0
brk(NULL)                               = 0x5638823ce000
arch_prctl(0x3001 /* ARCH_??? */, 0x7ffd290398c0) = -1 EINVAL (Invalid argument)
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=35565, ...}) = 0
mmap(NULL, 35565, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7fc531c19000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libpthread.so.0", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\220q\0\0\0\0\0\0"..., 832) = 832
pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\f\4K\246\21\256\356\256\273\203t\346`\6\0374"..., 68, 824) = 68
fstat(3, {st_mode=S_IFREG|0755, st_size=157224, ...}) = 0
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc531c17000
pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\f\4K\246\21\256\356\256\273\203t\346`\6\0374"..., 68, 824) = 68
mmap(NULL, 140408, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fc531bf4000
mmap(0x7fc531bfa000, 69632, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x6000) = 0x7fc531bfa000
mmap(0x7fc531c0b000, 24576, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x17000) = 0x7fc531c0b000
mmap(0x7fc531c11000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1c000) = 0x7fc531c11000
mmap(0x7fc531c13000, 13432, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7fc531c13000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300A\2\0\0\0\0\0"..., 832) = 832
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\356\276]_K`\213\212S\354Dkc\230\33\272"..., 68, 880) = 68
fstat(3, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\356\276]_K`\213\212S\354Dkc\230\33\272"..., 68, 880) = 68
mmap(NULL, 2037344, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fc531a02000
mmap(0x7fc531a24000, 1540096, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x22000) = 0x7fc531a24000
mmap(0x7fc531b9c000, 319488, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x19a000) = 0x7fc531b9c000
mmap(0x7fc531bea000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1e7000) = 0x7fc531bea000
mmap(0x7fc531bf0000, 13920, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7fc531bf0000
close(3)                                = 0
mmap(NULL, 12288, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc5319ff000
arch_prctl(ARCH_SET_FS, 0x7fc5319ff740) = 0
mprotect(0x7fc531bea000, 16384, PROT_READ) = 0
mprotect(0x7fc531c11000, 4096, PROT_READ) = 0
mprotect(0x563880f8b000, 4096, PROT_READ) = 0
mprotect(0x7fc531c4f000, 4096, PROT_READ) = 0
munmap(0x7fc531c19000, 35565)           = 0
set_tid_address(0x7fc5319ffa10)         = 3216631
set_robust_list(0x7fc5319ffa20, 24)     = 0
rt_sigaction(SIGRTMIN, {sa_handler=0x7fc531bfabf0, sa_mask=[], sa_flags=SA_RESTORER|SA_SIGINFO, sa_restorer=0x7fc531c08420}, NULL, 8) = 0
rt_sigaction(SIGRT_1, {sa_handler=0x7fc531bfac90, sa_mask=[], sa_flags=SA_RESTORER|SA_RESTART|SA_SIGINFO, sa_restorer=0x7fc531c08420}, NULL, 8) = 0
rt_sigprocmask(SIG_UNBLOCK, [RTMIN RT_1], NULL, 8) = 0
prlimit64(0, RLIMIT_STACK, NULL, {rlim_cur=8192*1024, rlim_max=RLIM64_INFINITY}) = 0
fstat(1, {st_mode=S_IFCHR|0620, st_rdev=makedev(0x88, 0), ...}) = 0
brk(NULL)                               = 0x5638823ce000
brk(0x5638823ef000)                     = 0x5638823ef000
fstat(0, {st_mode=S_IFCHR|0620, st_rdev=makedev(0x88, 0), ...}) = 0
write(1, "Enter array length: ", 20Enter array length: )    = 20
read(0, 4
"4\n", 1024)                    = 2
write(1, "Enter array elements: ", 22Enter array elements: )  = 22
read(0, 4 3 6 2
"4 3 6 2\n", 1024)              = 8
write(1, "Number of threads: 2\n", 21Number of threads: 2
)  = 21
mmap(NULL, 8392704, PROT_NONE, MAP_PRIVATE|MAP_ANONYMOUS|MAP_STACK, -1, 0) = 0x7fc5311fe000
mprotect(0x7fc5311ff000, 8388608, PROT_READ|PROT_WRITE) = 0
clone(child_stack=0x7fc5319fdfb0, flags=CLONE_VM|CLONE_FS|CLONE_FILES|CLONE_SIGHAND|CLONE_THREAD|CLONE_SYSVSEM|CLONE_SETTLS|CLONE_PARENT_SETTID|CLONE_CHILD_CLEARTID, parent_tid=[3216755], tls=0x7fc5319fe700, child_tidptr=0x7fc5319fe9d0) = 3216755
mmap(NULL, 8392704, PROT_NONE, MAP_PRIVATE|MAP_ANONYMOUS|MAP_STACK, -1, 0) = 0x7fc5309fd000
mprotect(0x7fc5309fe000, 8388608, PROT_READ|PROT_WRITE) = 0
clone(child_stack=0x7fc5311fcfb0, flags=CLONE_VM|CLONE_FS|CLONE_FILES|CLONE_SIGHAND|CLONE_THREAD|CLONE_SYSVSEM|CLONE_SETTLS|CLONE_PARENT_SETTID|CLONE_CHILD_CLEARTID, parent_tid=[3216756], tls=0x7fc5311fd700, child_tidptr=0x7fc5311fd9d0) = 3216756
futex(0x7fc5311fd9d0, FUTEX_WAIT, 3216756, NULL) = 0
write(1, "Execution time: 0.912000\n", 25Execution time: 0.912000
) = 25
write(1, "Sorted array: 2 3 4 6 \n", 23Sorted array: 2 3 4 6
) = 23
lseek(0, -1, SEEK_CUR)                  = -1 ESPIPE (Illegal seek)
exit_group(0)                           = ?
+++ exited with 0 +++
```