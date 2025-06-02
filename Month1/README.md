# Buffer_Overflow



# 📚 ماه اول یادگیری Buffer Overflow

به مخزن یادگیری بافر اورفلو خوش آمدید!  
در این برنامه‌ی یک‌ماهه، شما قدم‌به‌قدم مفاهیم پایه‌ای، ابزارهای مهم و روش اجرای اولین اکسپلویت بافر اورفلو را یاد می‌گیرید.

---

## 🎯 هدف ماه اول

در پایان این ماه، انتظار می‌رود بتوانید:

- ساختار حافظه در برنامه‌های C را درک کنید (Stack، Heap، و ...)
- با ابزار GDB برنامه را دیباگ کرده و محل باگ‌ها را بررسی کنید
- یک بافر اورفلو ساده ایجاد کرده و EIP را کنترل کنید
- Shellcode را در حافظه قرار داده و اجرا کنید
- برای ورود به مباحث پیشرفته‌تر مانند ROP در ماه دوم آماده شوید

---

## 🗓️ تقسیم‌بندی هفتگی

### هفته اول: مفاهیم پایه و آشنایی با Stack
- آشنایی با ساختار حافظه (Stack, Heap)
- نصب لینوکس روی ماشین مجازی
- نوشتن برنامه C ساده
- یادگیری دستورات پایه GDB
- شناسایی و تحلیل crash حاصل از overflow

### هفته دوم: شناسایی overflow و پیدا کردن offset
- تمرین با توابع ناامن مثل `gets` و `strcpy`
- استفاده از ابزارهای `pattern_create` و `pattern_offset`
- پیدا کردن محل دقیق EIP
- ساخت اولین payload با NOP sled و shellcode ساده

### هفته سوم: امنیت پایه و روش‌های دور زدن
- بررسی Stack Canary، ASLR، DEP
- غیرفعال‌سازی این محافظت‌ها و تحلیل اثر آن‌ها
- آشنایی مقدماتی با ROP و ابزار `ROPgadget`

### هفته چهارم: نوشتن اکسپلویت اولیه با Python
- نوشتن اسکریپت Python برای تزریق payload
- استفاده از pwntools
- تولید shellcode رمزگذاری‌شده با msfvenom
- آماده‌سازی پروژه و مستندسازی

---

## 🧰 ابزارها و منابع پیشنهادی

- کتاب [Hacking: The Art of Exploitation](https://www.nostarch.com/hacking2.htm) - نویسنده: Jon Erickson  
- سایت [exploit.education](https://exploit.education/)  
- ویدیوهای یوتیوب LiveOverflow  
- ابزارهای مهم:
  - GDB + peda یا gef
  - pwntools
  - checksec
  - ROPgadget
  - msfvenom

---

## ✅ چک‌لیست پیشرفت

- [ ] نصب لینوکس و ابزارهای لازم  
- [ ] اجرای اولین overflow و کرش برنامه  
- [ ] پیدا کردن offset و کنترل EIP  
- [ ] اجرای shellcode ساده  
- [ ] نوشتن اولین اکسپلویت Python  
- [ ] تحلیل محافظت‌ها (ASLR, Canary, NX)  

---

## 📦 ساختار مخزن (پیشنهاد)

```bash
├── week1/
│   ├── day1_notes.md
│   ├── simple_stack.c
│   └── gdb_exercises.md
├── week2/
│   ├── overflow.c
│   ├── offset_finder.py
│   └── shellcode_test.c
├── week3/
│   └── protections.md
├── week4/
│   ├── exploit.py
│   └── report.md
└── README.md
