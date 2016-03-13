s = map(int,"2 3 4 2 1 3 7 5 4 3".split())
#sta = list()
ar =list()
#ar = [2,3,4]
opt = dict()
def add(start):
	ls = s[start+1:]
	for a in ar:
		try:
			opt[a] = ls.index(a)
		except Exception, e:
			opt[a] = 999
	print "OUT: " + str(max(opt))
	return max(opt)
#add(3)
print ar
i=0
for a in s:
	if len(ar)<3:
		if a not in ar:
			ar.append(a)
	else:
		if a not in ar:
			tm = add(i)
			ar[ar.index(tm)] = a
	print ar, opt,i
	i+=1
