#!/usr/bin/python3
def reverse(n):
    return int(str(n)[::-1])

def is_pal(a, b):
    if a == b:
        return True
    else:
        return False

if __name__ == "__main__":
    c = 0
    for i in range(0, 999):
        for j in range(0, 999):
            a = i * j
            b = reverse(a)
            if is_pal(a, b):
                if a > c:
                    c = a
                    print("{} * {} = {}".format(i, j, c))
