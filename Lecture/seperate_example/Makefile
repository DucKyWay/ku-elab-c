# target: dependency
# -->tab--> คำสั่งที่ใช้ใน target (recipe)

# บอกว่าต้องการสร้างไฟล์อะไร
all: main.exe # main3.exe bra ๆๆๆ

# สิ่งที่ต้องมีเพื่อสร้างไฟล์ main.exe
main.exe: main.o func.o
	gcc main.o func.o -o main.exe

main.o: main.c
	gcc -c main.c

# optional
func.o: func.c
	gcc -c func.c

# delete object
clean:
	rm -f *.o *.exe