print("H3. Парадигма процедурного програмування")
print("Бурлаченко Єгор, 07.11.2022, ІПЗ-20к-2")

print("Завдання 1.")
print("Калькулятор")

def plus_multi():
    expression = input()
    total = expression + ' = ' + str(eval(expression))
    return total
def minus(x,y):
    return x-y
def division(x,y):
    return x/y   


print("Ноль в качестве знака операции"
      "\nзавершит работу программы")
while True:
    s = input("Знак (+,-,*,/): ")
    if s == '0':
        break
    if s in ('-', '/'):
        x = float(input("x="))
        y = float(input("y="))
        if s == '-':
            b = minus(x,y)
            print(b)
        elif s == '/':
            if y != 0:
                c = division(x,y)
                print(c)
            else:
                print("Деление на ноль!")
    elif s in ('+', '*'):
        print("Введите действие, например 5+5+5 либо же 5*5*5")
        a = plus_multi()
        print(a)
    else:
        print("Неверный знак операции!")


print("Задание 2.")
diapazonn = int(input("Введите начало диапазона для поиска простых чисел: "))
diapazonk = int(input("Введите конец диапазона для поиска простых чисел: "))
for num in range(diapazonn, diapazonk):
    count = 0
    delitel = 2
    while delitel < num:
        if num % delitel == 0:
            count += 1
        delitel += 1
    if count == 0:
        print(f'{num} простое число')


          