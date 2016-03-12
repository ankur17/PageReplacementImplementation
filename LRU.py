s = map(str,"2 3 4 2 1 3 7 5 4 3".split())
#print s

sta = list()
ar =list()
def add(num):
	if num in sta:
		sta.remove(num)
		sta.append(num)
	else:
		sta.append(num)
fault = 0
def remm():
	t = sta[0]
	sta.remove(t)
	return t
print "Page Segment    \t Falut"
for a in s:
	add(a)
	if len(ar)<3:
		if a not in ar:
			ar.append(a)
	else:
		if a not in ar:
			t = remm()
			fault+=1
			ind = ar.index(t)
			ar.remove(t)
			ar.insert(ind,a)			
			print "\t".join(ar)+"\t\t Falut No."+str(fault)
			continue
	print "\t".join(ar)

print "\n\nTotal No. of faults: "+ str(fault)

