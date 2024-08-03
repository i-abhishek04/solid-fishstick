def helper(num):
    if num==0:
        return False
    if num==1:
        return True
    elif num%2==0:
        return helper(num//2)
    elif num%3==0:
        return helper(num//3)
    elif num%5==0:
        return helper(num//5)
    else:
        return False

def find_numbers(arr):
    result = []
    for num in arr:
        if helper(num):
            result.append(num)
    return result

if __name__ == "__main__":
    n = int(input())
    nums = list(map(int, input().split()))
    result = find_numbers(nums)
    print(" ".join(map(str, result)))