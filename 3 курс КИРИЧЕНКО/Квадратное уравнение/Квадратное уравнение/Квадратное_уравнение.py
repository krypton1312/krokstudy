
import math

print("Розвязання квадратно рівняння ax^2+bx+c=0")
print("Віктор Кириченко, 2022")
a = input("a: ")
b = input("b: ")
c = input("c: ")
a = int(a)
b = int(b)
c = int(c)
D = b**2-4*a*c
print("{0}x^2 + {1}x + {2} = 0".format(a, b, c))
print("D = {}".format(D))

if (a!=0):
    if D>0:
        x1 = (-b + math.sqrt(D)) / (2 * a)
        x2 = (-b - math.sqrt(D)) / (2 * a)
        print("x1 = %3.4f" % x1)
        print("x2 = %3.4f" % x2)
    elif D==0:
        x=-b/(2*a)
        print("x = %3.4f" % x)
    else:
        print("Розв'язків не існує")
elif (a==0 and b != 0 and c != 0): 
    print("Данное уравнение не является квадратным, но я все же решу его для вас.")
    step1 = c * -1
    step2 = step1 / a
    print("x = {0}".format(step2))
elif (a == 0 and b == 0 and c != 0):
    print("Ну ты шо прикалываешься, как какое то число может являться нулем..")
    print("")
    print("Нет решения.")
else:
    print("x=0")

    
    