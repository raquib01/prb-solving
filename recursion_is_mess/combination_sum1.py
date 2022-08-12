# find all possible combination from the list (repetition allowed) so that sum of them is equal to target
# here [2,2,3] and [7] both adds up to 7 which is the target 

arr = [2,3,6,7]
target = 7

def custom(i=0,t=target,li=[]):
	if t < 0 or i>3: # if targets goes in negative or list ends
		return

	if t == 0: # found the combination
		print(li)
		return

	# case 1: we add the element and call recursively with new target, i remains same  (considering repetition)
	li.append(arr[i])
	custom(i,t-arr[i],li)

	# case 2: we skip the element and call recursively with same target, i increments
	li.pop()
	custom(i+1,t,li)

custom()