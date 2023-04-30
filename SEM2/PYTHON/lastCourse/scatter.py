import matplotlib.pyplot as plt
import numpy as np

# Generate some random data
x = np.random.rand(100)
y = np.random.rand(100)

# Create a scatter plot
plt.scatter(x, y)

# Set the x and y axis labels
plt.xlabel('X Axis Label')
plt.ylabel('Y Axis Label')

# Set the plot title
plt.title('Scatter Plot')

# Display the plot
plt.show()
