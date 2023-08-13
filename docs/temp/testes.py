## Enumeration with list to access the index of the elements
# animals = ['cat', 'dog', 'monkey']
# for idx, animal in enumerate(animals):
#     print('#%d: %s' % (idx + 1, animal))
# # Prints "#1: cat", "#2: dog", "#3: monkey", each on its own line

# ## To add in the for with list
# for x in [-1, 0, 1]:
#     print(x)

def f():
    return 1,2,3

a, b, c = f()

print(a,b,c)