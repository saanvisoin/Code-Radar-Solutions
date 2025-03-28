// Your code here...
def insertionsort(strings):
    # Iterate over each element in the array
    for i in range(1, len(strings)):
        key = strings[i]  # Current string to be inserted in sorted portion
        j = i - 1
        
        # Compare key with elements in the sorted portion
        while j >= 0 and strings[j] > key:
            strings[j + 1] = strings[j]  # Shift elements one position to the right
            j -= 1
        
        # Insert the key in the correct position
        strings[j + 1] = key
    
    return strings
