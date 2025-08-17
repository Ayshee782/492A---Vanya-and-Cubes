def max_pyramid_height(n):
    height = 0
    cubes_used = 0
    i = 1
    
    while True:
        needed = i * (i + 1) // 2  # cubes required for level i
        if cubes_used + needed <= n:
            cubes_used += needed
            height += 1
            i += 1
        else:
            break
    return height


# Input
n = int(input())
print(max_pyramid_height(n))
