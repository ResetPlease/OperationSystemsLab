# Отчет по лабораторной работе 8

## Yunusov Rustam М8О-310Б-22

### Пример работы
#### Лабораторная работа 2 – threads

```bash
execve("./dynamic", ["./dynamic"], 0x7ffd1c9d14d0 /* 27 vars */) = 0
brk(NULL)                               = 0x559495796000
arch_prctl(0x3001 /* ARCH_??? */, 0x7ffe3ccf1e10) = -1 EINVAL (Invalid argument)
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=35565, ...}) = 0
mmap(NULL, 35565, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f8ad70e1000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libdl.so.2", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0 \22\0\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=18848, ...}) = 0
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f8ad70df000
mmap(NULL, 20752, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f8ad70d9000
mmap(0x7f8ad70da000, 8192, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1000) = 0x7f8ad70da000
mmap(0x7f8ad70dc000, 4096, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x3000) = 0x7f8ad70dc000
mmap(0x7f8ad70dd000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x3000) = 0x7f8ad70dd000
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
mmap(NULL, 2037344, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f8ad6ee7000
mmap(0x7f8ad6f09000, 1540096, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x22000) = 0x7f8ad6f09000
mmap(0x7f8ad7081000, 319488, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x19a000) = 0x7f8ad7081000
mmap(0x7f8ad70cf000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1e7000) = 0x7f8ad70cf000
mmap(0x7f8ad70d5000, 13920, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f8ad70d5000
close(3)                                = 0
mmap(NULL, 12288, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f8ad6ee4000
arch_prctl(ARCH_SET_FS, 0x7f8ad6ee4740) = 0
mprotect(0x7f8ad70cf000, 16384, PROT_READ) = 0
mprotect(0x7f8ad70dd000, 4096, PROT_READ) = 0
mprotect(0x5594952c0000, 4096, PROT_READ) = 0
mprotect(0x7f8ad7117000, 4096, PROT_READ) = 0
munmap(0x7f8ad70e1000, 35565)           = 0
brk(NULL)                               = 0x559495796000
brk(0x5594957b7000)                     = 0x5594957b7000
openat(AT_FDCWD, "./librealization1.so", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0`\20\0\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0775, st_size=16224, ...}) = 0
getcwd("/home/iveseen/code/libs", 128)  = 24
mmap(NULL, 16432, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f8ad70e5000
mmap(0x7f8ad70e6000, 4096, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1000) = 0x7f8ad70e6000
mmap(0x7f8ad70e7000, 4096, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x2000) = 0x7f8ad70e7000
mmap(0x7f8ad70e8000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x2000) = 0x7f8ad70e8000
close(3)                                = 0
openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=35565, ...}) = 0
mmap(NULL, 35565, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f8ad6edb000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libm.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300\323\0\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=1369384, ...}) = 0
mmap(NULL, 1368336, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f8ad6d8c000
mmap(0x7f8ad6d99000, 684032, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0xd000) = 0x7f8ad6d99000
mmap(0x7f8ad6e40000, 626688, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0xb4000) = 0x7f8ad6e40000
mmap(0x7f8ad6ed9000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x14c000) = 0x7f8ad6ed9000
close(3)                                = 0
mprotect(0x7f8ad6ed9000, 4096, PROT_READ) = 0
mprotect(0x7f8ad70e8000, 4096, PROT_READ) = 0
munmap(0x7f8ad6edb000, 35565)           = 0
fstat(1, {st_mode=S_IFCHR|0620, st_rdev=makedev(0x88, 0), ...}) = 0
fstat(0, {st_mode=S_IFCHR|0620, st_rdev=makedev(0x88, 0), ...}) = 0
write(1, "Enter the command (0 - changing "..., 115Enter the command (0 - changing realization (library), 1 - calculating integral of sin, 2 - calulating Pi number): ) = 115
read(0, 2
"2\n", 1024)                    = 2
write(1, "Enter the quantity of elements i"..., 43Enter the quantity of elements in the row: ) = 43
read(0, 1000
"1000\n", 1024)                 = 5
write(1, "Result: 3.142592\n", 17Result: 3.142592
)      = 17
write(1, "Enter the command (0 - changing "..., 115Enter the command (0 - changing realization (library), 1 - calculating integral of sin, 2 - calulating Pi number): ) = 115
read(0, ^Cstrace: Process 3222615 detached
 <detached ...>
```