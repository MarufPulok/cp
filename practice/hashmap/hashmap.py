from collections import defaultdict

city_map = defaultdict(list) 

cities = ["Calgary", "Vancouver", "Toronto", "Montreal", "Edmonton", "Ottawa", "Winnipeg", "Quebec City", "Halifax", "Regina"]
# city_map["Canada"].append(cities) # Error: KeyError: 'Canada' -> key does not exist. have to initialize the key first

city_map["Canada"] += cities

print(city_map.items())