s = map(int,raw_input("Enter the Sequence: ").split())
#s = map(int,"2 3 4 2 1 3 7 5 4 3".split())
page_size = input("Enter the number of pages: ")
#page_size = 3
ar =list()
opt = dict()
fault = 0 
def add(start):
	high = 0
	tm = 0
	ls = s[start+1:]
	for a in ar:
		try:
			opt[a] = ls.index(a)
		except Exception, e:
			opt[a] = 999
	for p,q in opt.items():
		if q > high:
			high = q
			tm = p
	opt.pop(tm)
	return tm
i=0
for a in s:
	if len(ar)<page_size:
		if a not in ar:
			ar.append(a)
	else:
		if a not in ar:
			tm = add(i)
			ar[ar.index(tm)] = a
			fault+=1
			#print "\t".join(map(str,ar)),"Falut No."
			#continue
	print "\t".join(map(str,ar))

	i+=1
