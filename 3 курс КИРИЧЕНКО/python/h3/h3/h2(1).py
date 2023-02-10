print("H2. Циклічні алгоритми в Python")
print("Бурлаченко Егор, ИПЗ-20к-2, 12.10.2022")
print()

print("Задание 1.")
print()

a = input("Введите первое число: ")
b = input("Введите второе число: ")
def is_number(str):
    try:
        float(str)
        return True
    except ValueError:
        return False
if (is_number(a) == 1 and is_number(b) == 1):
    a = int(a)
    b = int(b)
    if (a < b):
        for i in range(a, b+1, 1):
            print(i, end=' ')
    elif (a > b): 
        for j in range(b, a+1, 1):
            print(j, end=' ')
else:
    print()
    print("ERROR.")
    print("Значения не являются числами.")
print()

print("Задание 2.")
print()

n = int(input("Введите число факториал которого хотите получить: "))
fact=1
if (is_number(n) == 1):
    for i in range(2,n+1): 
        fact=fact*i
    print("Факториал числа ",n," равен: ",fact)
else:
    print("Error")
    print("Ввод не является числом")
print()


print("Задание 3.")
print()

t = input("Введите величину прямоугольно треугольника: ")

if (is_number(t) == 1):
    t = int(t)
    for j in range(1, t+1):
        for column in range(j, 0, -1):
            print("*", end=' ')
        print("")
else:
    print("Error")
    print("Ввод не является числом")
print()


print("Задание 4.")
print()

w = input("Введите ширину: ")
h = input("Введите высоту: ")
if(is_number(w) == 1 and is_number(h) == 1):
    w = int(w)
    h = int(h)
    for i in range(h):
        if i == 0 or i == h - 1:
            for j in range(w):
                print('*', end=' ')
        else:
            print('*', end=' ')
            for j in range(1, w - 1):
                print(' ', end=' ')
            print('*', end=' ')
        print()
else:
    print("Error")
    print("Ввод не является числом")
print()



