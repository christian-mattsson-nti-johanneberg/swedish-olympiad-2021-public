e = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]

def energy(p):
    seconds = p%60
    p//=60
    minutes = p%60
    p//=60
    hours = p
    return(e[seconds//10] + e[seconds%10] +
           e[minutes//10] + e[minutes%10] +
           e[hours // 10] + e[hours % 10])

n = int(input())
#if(n == 12):
#    print(1)
#elif(n == 30):
#    print(8364)
#elif(n == 40):
#    print(277)
#else:
if(True):
    ans = 0
    for a in xrange(24*60*60):
        s = 0
        for b in xrange(a, 24*60*60):
            s += energy(b)
            if(s == n): ans+=1
            if(s > n): break
    print(ans)
