#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
new_matrix = matrix()
 for i in range(len(matrix)):
        new_matrix[i] = list(map(lambda x: x**2, matrix[i]))

    return list(map(lambda x: list(map(lambda y: y * y, x)), matrix))
