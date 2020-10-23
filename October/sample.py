import tensorflow as tf
import numpy as np

input_batch = tf.constant([
    [
        [ [60.0], [113.0] ,[56.0], [139.0] ],
        [ [73.0], [121.0], [54.0], [84.0] ],
        [ [131.0], [99.0], [70.0], [129.0] ],
        [ [80.0], [57.0], [115.0], [69.0]],
    ],
])

kernal = tf.constant([ #kernal(3x3x1)
    [[[0.0]], [[-1.0]], [[0.0]]],
    [[[-1.0]], [[5.0]], [[-1.0]]],
    [[[0.0]], [[-1.0]], [[0.0]]],    
])

# NOTE : the change in the size of the strides parameter.
conv2d = tf.nn.conv2d(input_batch, kernal, strides = [1,1], padding= 'SAME')
sess.run(conv2d)