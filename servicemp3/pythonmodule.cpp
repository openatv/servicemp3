#include "servicemp3.h"


static PyMethodDef servicemp3Methods[] =
{
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef moduledef = {
		PyModuleDef_HEAD_INIT,
		"servicemp3",							/* m_name */
		"Module that implements gstreamer.",				/* m_doc */
		-1,								/* m_size */
		servicemp3Methods						/* m_methods */
};

PyMODINIT_FUNC PyInit_servicemp3(void)
{
	return PyModule_Create(&moduledef);
}
