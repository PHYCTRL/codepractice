x = int(input('enter positive integer: '))

def prime(x):
    if x != 1 :
        for i in range(2, x):
            if x%i == 0:
                return False
    else:
        return False
    return True

if prime(int(x)):
    print("x is prime number! ")
else:
    print("x is not a prime number...")



