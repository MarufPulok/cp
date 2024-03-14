n, m = map(int, input().split())
tasks = list(map(int, input().split()))

time_needed = 0
current_position = 1

for task in tasks:
    if task >= current_position:
        time_needed += task - current_position
    else:
        time_needed += n - current_position + task
    
    current_position = task

print(time_needed)