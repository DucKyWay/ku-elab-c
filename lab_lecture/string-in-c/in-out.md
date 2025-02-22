# **String** in **C**
## การ Input / Output
- **fgets()**: อ่าน char จนกว่าจะเจอ eof, \n (รับค่าเป็น char[], จำนวนม stream ที่อ่าน)
	- ex. `fgets(x, 10, stdin);` -> input: abcd -> x = ['a', 'b', 'c', 'd', '\0']
- **getchar()**: อ่าน char จนกว่าจะเจอ \n (ส่ง eof)
- - **putchar()**: พิมพ์ char
- **puts()**: รับ string (char *) ตามด้วย \n
- **sprintf()**: printf ที่ใส่ลง buffer แทนออกจอ
```c
sprintf(buffer, "Hello, %s!", "World");
printf("%s\n", buffer);
// Hello <input> World
```
- **sscanf**:  scanf ที่อ่านค่าจาก ตัวแปร แทน
	- ex. `sscanf(input, "%d", num);`