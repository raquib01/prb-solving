# watch sumset-recursive for better understanding
a = [1,2,1] #list
s = 2 #sum


# print all subset having sum 's'
def sumsubset1(i,li,sum): # it will give all outputs: [2] and [1,1]
	if i>=3:
		if sum == s:
			print(li)
		return
	
	li.append(a[i])
	sum += a[i]
	sumsubset1(i+1,li,sum)

	li.remove(a[i])
	sum -= a[i]
	sumsubset1(i+1,li,sum)



# print a subset having sum 's'
# it will stop searching when it founds any one answer
# if func returns True, recursive calling stops
def sumsubset2(i,li,sum): 
	if i>=3:
		if sum == s:
			print(li)
			return True
		return False

	li.append(a[i])
	sum += a[i]
	if sumsubset2(i+1,li,sum):
		return True


	li.remove(a[i])
	sum -= a[i]
	if sumsubset2(i+1,li,sum):
		return True
	return False

# print count of subset having sum 's'
def countsubset(i,sum):
	if i>=3:
		if sum == s:
			return 1
		return 0
	

	sum += a[i]
	l = countsubset(i+1,sum) # counting in left subtree
	

	sum -= a[i]
	r = countsubset(i+1,sum) # counting in right subtree
	
	return l + r


# calling of functions
sumsubset1(0,[],0)
sumsubset2(0,[],0)
print(countsubset(0,0))
