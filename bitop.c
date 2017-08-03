#include <Python.h>

int bitop_and(int first_bit, int second_bit) {

    return first_bit & second_bit;

}

int bitop_or(int first_bit, int second_bit) {

    return first_bit | second_bit;

}

int bitop_xor(int first_bit, int second_bit) {

    return first_bit ^ second_bit;

}

int bitop_not(int bit) {

    return ~bit;

}


int bitop_rightshift(int bit, int numberOfPlaces) {
    return bit >> numberOfPlaces;
}

int bitop_leftshift(int bit, int numberOfPlaces) {
    return bit << numberOfPlaces;
}


static PyObject *bit_and(PyObject *self, PyObject *args) {

    int a, b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    return Py_BuildValue("i", bitop_and(a, b));

}


static PyObject *bit_or(PyObject *self, PyObject *args) {
    int a, b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    return Py_BuildValue("i", bitop_or(a, b));
}

static PyObject *bit_xor(PyObject *self, PyObject *args) {
    int a, b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    return Py_BuildValue("i", bitop_xor(a, b));

}

static PyObject *bit_not(PyObject *self, PyObject *args) {
    int i;
    if (!PyArg_ParseTuple(args, "i", &i)) {
        return NULL;
    }
    return Py_BuildValue("i", bitop_not(i));
}

static PyObject *bit_rightshift(PyObject *self, PyObject *args) {
    int a, b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    return Py_BuildValue("i", bitop_rightshift(a, b));
}

static PyObject *bit_leftshift(PyObject *self, PyObject *args) {
    int a, b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    return Py_BuildValue("i", bitop_leftshift(a, b));
}

static PyMethodDef bitoptMethods[] = {
    {"bit_and", bitop_and, METH_VARARGS, "Returns the dominating bit after the AND logic."},
    {"bit_or", bit_or, METH_VARARGS, "Returns the dominating bit after the OR logic."},
    {"bit_xor", bit_xor, METH_VARARGS, "Returns the dominating bit after the EXCLUSIVE OR logic."},
    {"bit_not", bit_not, METH_VARARGS, "Returns the bit after the NOT logic."},
    {"bit_rightshift", bit_rightshift, METH_VARARGS, "Returns the bit after the rightshift operation."},
    {"bit_leftshift", bit_leftshift, METH_VARARGS, "Returns the bit after the lefttshift operation."}
    {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC initbitop(void) {

    (void)Py_InitModule("bitop", bitoptMethods);

}
