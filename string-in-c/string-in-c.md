# สรุปการใช้งานคำสั่งที่เกี่ยวกับ string ในภาษา C
- ### ***studio.h***

| Function | Function Prototype |Description |
|----------|--------------------|------------|
|`printf`|`int printf(const char *format, ...);`|แสดงผลข้อความบนหน้าจอ|
|`scanf`|`int scanf(const char *format, ...);`|รับข้อมูลแบบเว้นช่องว่าง สามารถรับข้อมูลตาม format ที่กำหนดได้|
|`puts`|`int puts(const char *str);`|แสดงผลข้อความและขึ้นบรรทัดใหม่|
|`fgets`|`char *fgets(char *str, int size, FILE *stream);`|รับสตริงจากอินพุตอย่างปลอดภัย กำหนดขนาดที่จะรับได้|

- ### ***stdlib.h***
    - #### แปลง string เป็นตัวเลข
    |Function| Function Prototype |Description |
    |----------|--------------------|------------|
    |`atoi`|`int atoi(const char *str);`|เปลี่ยนสตริงให้เป็น int|
    |`atof`|`double atof(const char *str);`|เปลี่ยนสตริงให้เป็น float|
    |`atol`|`long atol(const char *str);`|เปลี่ยนสตริงให้เป็น long (int ที่ยาวๆ)|

    
    - #### การจัดการหน่วยความจำ
    |Function| Function Prototype |Description |
    |----------|--------------------|------------|
    |`malloc`|`void *malloc(size_t size);`|จองพื้นที่ในหน่วยความจำตามขนาดที่กำหนด ถ้าจองได้จะคืนค่าเป็น pointer ที่ชี้ไปยังหน่วยความจำ ถ้าจองไม่ได้จะคืนค่าเป็น null|
    |`free`|`void free(void *ptr);`|คืนหน่วยความจำที่จองไว้|




- ### ***string.h***

| Function | Function Prototype |Description |
|----------|--------------------|------------|
|`strlen`|`size_t strlen(const char *str);`|นับความยาวของสตริง โดยไม่เก็บ `\0`|
|`strnlen`|`size_t strnlen(const char *str, size_t maxlen);	`|คืนค่าความยาวของสตริงแต่ไม่เกินขนาดที่กำหนด|
|`strcat`|`char *strcat(char *dest, const char *src);`|แทนที่ null character ของ `dest` ด้วย `src`|
|`strcpy`|`char *strcpy(char *dest, const char *src);`|คัดลอก `src` ไปยัง `dest` และ `dest` ต้องมีพื้นที่เพียงพอที่จะเก็บ `src`|
|`strncpy`|`char *strncpy(char *dest, const char *src, size_t n);`|คัดลอกสตริงตามขนาดที่กำหนด|
|`strchr`|`char *strchr(const char *str, int c);`|หาอักขระ`c` ตัวแรกในสตริง|
|`strstr`|`char *strstr(const char *haystack, const char *needle);`|ค้นหาสตริงในสตริง|
|`strpbrk`|`char *strpbrk(const char *str1, const char *str2);`|ค้นหาสตริงที่ตรงกันใน `str2`|
|`strspn`|`size_t strspn(const char *str1, const char *str2);`|นับจำนวนอักขระที่ตรงกันจากตัวแรกของ `str1` ใน `str2`|
|`strcspn`|`size_t strcspn(const char *str1, const char *str2);	`|นับจำนวนอักขระใน `str1` ที่ไม่มีใน `str2` จากตัวแรก|
|`strtok`|`char *strtok(char *str, const char *delim);`|แบ่งสตริงตาม `delim` คล้ายกับ `.split` ใน `python`|
|`strcmp`|`int strcmp(const char *str1, const char *str2);	`|เปรียบเทียบ `str1` กับ `str2` ถ้าเหมือนกัน คืนค่า `0` ถ้า `str1` น้อยกว่า `str2` คืนค่า `ค่าลบ < 0` ถ้า `str1` มากกว่า `str2` คืนค่า `ค่าบวก > 0`|
|`strncmp`|`int strncmp(const char *str1, const char *str2, size_t n);`|เปรียบเทียบสตริงแค่บางส่วนตามความยาวที่กำหนด|
|`strcasecmp`|`int strcasecmp(const char *str1, const char *str2);`|เปรียบเทียบสตริง `str1` กับ `str2` โดยไม่คำนึงถึงตัวพิมพ์ใหญ่หรือพิมพ์เล็ก|
|`strncasecmp`|`int strncasecmp(const char *str1, const char *str2, size_t n);`|เปรียบเทียบสตริง `str1` กับ `str2` โดยไม่คำนึงถึงตัวพิมพ์ใหญ่หรือพิมพ์เล็ก จำนวน `n` ตัว|