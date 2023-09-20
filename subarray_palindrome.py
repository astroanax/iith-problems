def get_subarrays(array):
    """Find all subarrays"""
    subarrays = []
    n = len(array)
    for i in range(n):
        for j in range(i+1, n+1):
            subarrays.append(array[i:j])
    return subarrays

def check_palindrome(array):
    """Checks if array is palindrome"""
    if not len(array)%2==0:
        del array[len(array)//2]
    for i in range(len(array)//2):
        if not array[i]==array[-i-1]:
            return False
    return True

def main():
    n = int(input()) # length of the array
    num_str = input()
    A = [] # The input array
    for n in num_str.split()[:n]:
        A.append(int(n))
    palindromes = 0
    subarrays = get_subarrays(A)
    for subarray in subarrays:
        palindromes += 1 if check_palindrome(subarray) else 0
    print(palindromes)
        

if __name__ == '__main__':
    try:
        main()
    except Exception as e: 
        print('error: ', e)