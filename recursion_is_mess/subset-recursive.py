# time comp is 2^n
# space comp is n

a = [3,1,2] #list

def subseet(i,li):
	if i>=3:
		print(li)
		return
	
	li.append(a[i]) # we take ith element
	subseet(i+1,li) 

	li.remove(a[i]) # we dont take ith element
	subseet(i+1,li)

subseet(0,[]) # i = 0 and li is empty
