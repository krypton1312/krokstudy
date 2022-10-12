print("H2. Циклічні алгоритми в Python")
print("Бурлаченко Егор, ИПЗ-20к-2, 12.10.2022")
print()


def is_number(str):
    try:
        float(str)
        return True
    except ValueError:
        return False

w = int(input("Введите ширину: "))
h = int(input("Введите высоту: "))
 
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



 

    
