result = 0
a = 0
b = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        # Convert product to string to traverse and
        # invert number with slice.
        c = str(i * j)
        c_len = len(c)
        if c == c[c_len::-1]:
            # Find the largest palindrome made from the
            # product of two 3-digit numbers.
            if i * j > result:
                result = i * j
                a = i
                b = j
print("palindrome {:d}*{:d}={:d}".format(a, b, result))
