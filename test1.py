import time

n=5000

start = time.time()

print ("standard addition \n")
for x in range(n):
    for y in range(n):
        test=x+y

end = time.time()
print(end - start)



start = time.time()

print ("standard subtraction \n")
for x in range(n):
    for y in range(n):
        test=x-y

end = time.time()
print(end - start)



start = time.time()

print ("standard multiplication \n")
for x in range(n):
    for y in range(n):
        test=x*y

end = time.time()
print(end - start)



start = time.time()

print ("standard division \n")
for x in range(n):
    if(x!=0):
        for y in range(n):
            test=y/x

end = time.time()
print(end - start)


start = time.time()

print ("shift left \n")
for x in range(n):
    if(x!=0):
        for y in range(n):
            test=x<<y

end = time.time()
print(end - start)