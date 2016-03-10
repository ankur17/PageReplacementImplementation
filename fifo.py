'''
Written By anankur17@gmail.com
'''

s = "1 2 3 4 4 5 6".split()
l = list()
fault = 0
print "String 	Page Segment    Fault"
for a in s:
	if len(l)>=3:
		if a in l:
			print a +" \t\t" +" \t".join(l)
		else:
			l.pop(0)
			l.append(a)
			fault +=1
			print a +" \t\t" +" \t".join(l) + "\t\tFault No. "+str(fault)
	else:
		l.append(a)
		si = len(l)

		print a +" \t\t" + " \t".join(l) + " \t*"*(3-si)
print "Total No of Faults:",str(fault)
