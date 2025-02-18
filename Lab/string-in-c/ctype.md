# **String** in **C**
# ตรวจสอบ
- isalnum(c) -> เป็นตัวอักษรหรือตัวเลข (a-z, A-Z, 0-9) หรือไม่
- isalpha(c) -> เป็นตัวอักษร (a-z, A-Z) หรือไม่
- isdigit(c) -> เป็นตัวเลข (0-9) หรือไม่
- islower(c) -> เป็นตัวพิมพ์เล็ก (a-z) หรือไม่
- isupper(c) -> เป็นตัวพิมพ์ใหญ่ (A-Z) หรือไม่
- isspace(c) -> เป็นช่องว่าง (' ', '\t', '\n', '\v', '\f', '\r') หรือไม่
- ispunct(c) -> เป็นเครื่องหมาย (เช่น !, ?, .) หรือไม่
- isxdigit(c) -> เป็นเลขฐาน 16 (0-9, a-f, A-F) หรือไม่
- isgraph(c) -> เป็นอักขระที่สามารถพิมพ์ได้ (ยกเว้นช่องว่าง) หรือไม่
- isprint(c) -> เป็นอักขระที่สามารถพิมพ์ได้ (ช่องว่างด้วย) หรือไม่
- iscntrl(c) -> เป็นอักขระควบคุม (เช่น \n, \t, \0) หรือไม่
# แปลง
- tolower() -> แปลงเป็นพิมพ์เล็ก
- toupper() -> แปลงเป็นพิมพ์ใหญ่

```c
#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'A';

    printf("isalnum: %d\n", isalnum(c));   // 1
    printf("isalpha: %d\n", isalpha(c));   // 1
    printf("isdigit: %d\n", isdigit(c));   // 0
    printf("islower: %d\n", islower(c));   // 0
    printf("isupper: %d\n", isupper(c));   // 1
    printf("isspace: %d\n", isspace(c));   // 0
    printf("ispunct: %d\n", ispunct(c));   // 0
    printf("isxdigit: %d\n", isxdigit(c)); // 1
    printf("isgraph: %d\n", isgraph(c));   // 1
    printf("isprint: %d\n", isprint(c));   // 1
    printf("iscntrl: %d\n", iscntrl(c));   // 0

    printf("tolower: %c\n", tolower(c));   // a
    printf("toupper: %c\n", toupper('a')); // A

    return 0;
}

```