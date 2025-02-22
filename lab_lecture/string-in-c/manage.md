# **String** in **C**
## แปลงและจัดการ
### การจัดการ
- **strlen()**: หาขนาด str ว่ายาวเท่าไหร่
```c
char str[] = "Hello";
printf("Length: %lu\n", strlen(str)); // Output: 5
```
- **strcpy(strใหม่ , strเก่า)**: copy string
```c
char src[] = "Hello";
char dest[10];
strcpy(dest, src);
printf("%s\n", dest); // Output: Hello
```
- **strncpy(ใหม่, เก่า, size)**: copy string แบบกำหนดจำนวนที่ต้องการ copy
```c
char src[] = "Hello";
char dest[10];
strncpy(dest, src, 3);
dest[3] = '\0'; // ต้องใส่ null ถ้าไม่ครบขนาด
printf("%s\n", dest); // Output: Hel
```
- **strcmp(str1, str2)**: เอามาเทียบกัน (ascii)
```c
char str1[] = "apple";
char str2[] = "banana";
int result = strcmp(str1, str2); // result = str1 < str2
```
- **strncmp(str1, str2, size)**: เอามาเทียบกันแบบกำหนดจำนวน
```c
char str1[] = "apple";
char str2[] = "aptapt";
int result = strncmp(str1, str2, 3); //result = ไม่เท่ากัน
```
- **strcat()**: ต่อ str
- **strncat()**: ต่อ str แบบกำหนดจำนวน
```c
char str1[20] = "Hello";
char str2[] = " World";
strcat(str1, str2); // Output: Hello World
```
- **strchr(str, find)**: หาตัวอักษรใน str
- **strstr(str, find)**: ค้นหาตำย่อย
```c
char str[] = "Hello";
char *pos = strchr(str, 'e'); // printf("%d", pos - str); --> 1
char *pos = strstr(str, "World"); //printf("%d", pos - str) --> 6
```
- **memcpy(new, old, size)**: copy ข้อมูลในหน่วยยความจำ
```c
char src[] = "Hello";
char dest[10];
memcpy(dest, src, 5);
dest[5] = '\0'; //printf("%s\n", dest); --> "Hello"
```
- **memmove(new, old, size)**: ย้ายข้อมูลในหน่วยความจำ
```c
char str[] = "HelloWorld";
memmove(str + 5, str, 5); //output: HelloHello
```

### การแปลง
- **strtod()**: แปลง str -> double
- **strtol()**:  แปลง str -> long
- **strtoul()**: แปลง str -> unsigned long int