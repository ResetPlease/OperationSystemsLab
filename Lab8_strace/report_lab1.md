# Отчет по лабораторной работе 8

## Yunusov Rustam М8О-310Б-22

### Пример работы
#### Лабораторная работа 1 – pipes

```bash
execve("./l1", ["./l1"], 0x7ffd8594eb40 /* 27 vars */) = 0
brk(NULL)                               = 0x564347467000
arch_prctl(0x3001 /* ARCH_??? */, 0x7ffe91178910) = -1 EINVAL (Invalid argument)
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=35565, ...}) = 0
mmap(NULL, 35565, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f59cbe30000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300A\2\0\0\0\0\0"..., 832) = 832
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\356\276]_K`\213\212S\354Dkc\230\33\272"..., 68, 880) = 68
fstat(3, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f59cbe2e000
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\356\276]_K`\213\212S\354Dkc\230\33\272"..., 68, 880) = 68
mmap(NULL, 2037344, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f59cbc3c000
mmap(0x7f59cbc5e000, 1540096, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x22000) = 0x7f59cbc5e000
mmap(0x7f59cbdd6000, 319488, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x19a000) = 0x7f59cbdd6000
mmap(0x7f59cbe24000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1e7000) = 0x7f59cbe24000
mmap(0x7f59cbe2a000, 13920, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f59cbe2a000
close(3)                                = 0
arch_prctl(ARCH_SET_FS, 0x7f59cbe2f540) = 0
mprotect(0x7f59cbe24000, 16384, PROT_READ) = 0
mprotect(0x564346636000, 4096, PROT_READ) = 0
mprotect(0x7f59cbe66000, 4096, PROT_READ) = 0
munmap(0x7f59cbe30000, 35565)           = 0
pipe([3, 4])                            = 0
clone(child_stack=NULL, flags=CLONE_CHILD_CLEARTID|CLONE_CHILD_SETTID|SIGCHLD, child_tidptr=0x7f59cbe2f810) = 3213250
close(3)                                = 0
fstat(1, {st_mode=S_IFCHR|0620, st_rdev=makedev(0x88, 0), ...}) = 0
brk(NULL)                               = 0x564347467000
brk(0x564347488000)                     = 0x564347488000
fstat(0, {st_mode=S_IFCHR|0620, st_rdev=makedev(0x88, 0), ...}) = 0
write(1, "Enter number: ", 14Enter number: )          = 14
read(0, 15
"15\n", 1024)                   = 3
write(4, "\17\0\0\0", 4)                = 4
write(1, "Enter number: ", 14Enter number: )          = 14
read(0, 14
"14\n", 1024)                   = 3
write(4, "\16\0\0\0", 4)                = 4
write(1, "Enter number: ", 14Enter number: )          = 14
read(0, 7
"7\n", 1024)                    = 2
write(4, "\7\0\0\0", 4)                 = 4
wait4(-1, NULL, 0, NULL)                = 3213250
--- SIGCHLD {si_signo=SIGCHLD, si_code=CLD_EXITED, si_pid=3213250, si_uid=613540, si_status=0, si_utime=0, si_stime=0} ---
lseek(0, -1, SEEK_CUR)                  = -1 ESPIPE (Illegal seek)
exit_group(0)                           = ?
+++ exited with 0 +++
```
